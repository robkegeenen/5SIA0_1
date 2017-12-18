#!/bin/bash
cd "$(dirname "$(readlink -f "${0}")")"
compfile=("../results/compare{1,2}")
tempfile="$(mktemp)"
./eeg >"${tempfile}"
if diff "${tempfile}" "${compfile}"
then
  echo "IDENTICAL"
else
  echo "DIFFERENT"
fi
rm -f "${tempfile}"
