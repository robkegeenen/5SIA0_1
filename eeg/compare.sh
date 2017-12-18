#!/bin/bash
compfiles=("../results/compare"{1,2})


cd "$(dirname "$(readlink -f "${0}")")"
tempfile="$(mktemp)"
./eeg >"${tempfile}"
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
