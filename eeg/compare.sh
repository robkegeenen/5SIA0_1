#!/bin/bash
compfile="../results/compare"
tickfile="../results/ticks"
conffile="../gem5/configs/example/arm-config.py"
gem5bin="../gem5/build/ARM/gem5.opt"

suffix="${1}"
numthreads="${2}"
simul="${3}"

doDiff() {
  tempfile="${1}"
  compfile="${2}"
  prefix="${3}"
  sed '/^Feature/! d' >"${tempfile}"
  if diff "${tempfile}" "${compfile}" >/dev/null
  then
    echo "${prefix}: IDENTICAL"
  else
    echo "${prefix}: DIFFERENT"
  fi
}

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
  tempfile="$(mktemp)"
  truncate -s0 "${simout}"

  if [ "${simul}" == "simul" ]
  then
    "${gem5bin}" "${conffile}.${suffix}" -n "${numthreads}" -c "eeg.arm.${suffix}" | tee -a "${simout}"
    echo -ne "\n\n" >"${simout}"
    newticks="$(cat "${simout}" | sed '/^Exiting/! d; s/^[^[:digit:]]*\([[:digit:]]\+\)[^[:digit:]]*$/\1/g')"
    compticks="$(cat "${tickfile}")"
    echo -ne "tick numbers:\n  +-original: ${compticks}\n  +------new: ${newticks}\n  +----saved: $((compticks - newticks))\n" >>"${simout}"
    cat "${simout}" | doDiff "${tempfile}" "${compfile}" "simulation" | tee -a "${simout}"
  fi
  ./"eeg.${suffix}" | doDiff "${tempfile}" "${compfile}" "    native" | tee -a "${simout}"

  rm -f "${tempfile}"
fi
