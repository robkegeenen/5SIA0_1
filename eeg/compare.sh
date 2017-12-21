#!/bin/bash
compfile="../results/compare.less"
tickfile="../results/ticks.less"
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
    "${gem5bin}" "${conffile}.${suffix}" -n "${numthreads}" -c "eeg.arm.${suffix}" | tee -a "${simout}" | grep --line-buffered -P '^Channel done$' | nl
    echo -ne "\n\n" >>"${simout}"
    compticks="$(cat "${tickfile}")"
    newticks="$(cat "${simout}" | sed '/^Exiting/! d; s/^[^[:digit:]]*\([[:digit:]]\+\)[^[:digit:]]*$/\1/g')"
    saveticks="$((compticks - ${newticks:-"${compticks}"}))"
    len="$((${#compticks}>${#newticks}?${#compticks}:${#newticks}))"
    len="$((len>${#saveticks}?len:${#saveticks}))"
    echo    "tick numbers:" >>"${simout}"
    echo -n "  +-original: " >>"${simout}"
    printf "%${len}s\n" "${compticks}" >>"${simout}"
    echo -n "  +------new: " >>"${simout}"
    printf "%${len}s\n" "${newticks:-ERROR!}" >>"${simout}"
    echo -n "  +----saved: " >>"${simout}"
    printf "%${len}s\n" "${saveticks}" >>"${simout}"
    cat "${simout}" | doDiff "${tempfile}" "${compfile}" "simulation" | tee -a "${simout}"
  fi
  ./"eeg.${suffix}" | doDiff "${tempfile}" "${compfile}" "    native" | tee -a "${simout}"

  rm -f "${tempfile}"
fi
