#!/bin/bash
compfiles=("../results/compare"{1,2})
conffile="../gem5/configs/example/arm-config.py"


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
    gem5.opt "${conffile}.${suffix}" -n "${numthreads}" -c "eeg.arm.${suffix}" | tee "simout.${suffix}"
  fi
fi
