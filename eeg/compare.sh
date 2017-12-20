#!/bin/bash
compfiles=("../results/compare"{0,1,2})
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

  tempfile="$(mktemp)"
  ./"eeg.${suffix}" >"${tempfile}"
  eqto=""
  for compfile in "${compfiles[@]}"
  do
    if diff "${tempfile}" "${compfile}" >/dev/null
    then
      eqto="IDENTICAL TO: ${compfile}"
    fi
  done
  if [ -z "${eqto}" ]
  then
    eqto="DIFFERENT"
  fi
  echo "${eqto}"
  rm -f "${tempfile}"
  if [ "${simul}" == "simul" ]
  then
    "${gem5bin}" "${conffile}.${suffix}" -n "${numthreads}" -c "eeg.arm.${suffix}" | tee "simout.${suffix}"
  fi
fi
