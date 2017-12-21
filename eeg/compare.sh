#!/bin/bash
compfile="../results/compare"
conffile="../gem5/configs/example/arm-config.py"
gem5bin="../gem5/build/ARM/gem5.opt"

suffix="${1}"
numthreads="${2}"
simul="${3}"

if [ "${#}" -lt "2" ]
then
  echo "Usage: ${0} <suffix> <num_threads> [simul]"
else
  cd "$(dirname "$(readlink -f "${0}")")"

  NUM_THREADS="${numthreads}" make native
  mv "eeg" "eeg.${suffix}"
  NUM_THREADS="${numthreads}" make
  mv "eeg.arm" "eeg.arm.${suffix}"
  simout="simout.${suffix}"
  truncate -s0 "${simout}"

  if [ "${simul}" == "simul" ]
  then
    "${gem5bin}" "${conffile}.${suffix}" -n "${numthreads}" -c "eeg.arm.${suffix}" | tee -a "${simout}"
  fi

  tempfile="$(mktemp)"
  ./"eeg.${suffix}" | sed '/^Feature/! d' >"${tempfile}"
  if diff "${tempfile}" "${compfile}" >/dev/null
  then
    echo "IDENTICAL" | tee -a "${simout}"
  else
    echo "DIFFERENT" | tee -a "${simout}"
  fi
  rm -f "${tempfile}"

fi
