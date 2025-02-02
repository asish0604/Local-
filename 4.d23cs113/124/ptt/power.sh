#!/bin/bash
if [ $# -ne 2 ]; then
	echo "Usage: $0 base exponent"
	exit 1
fi
base=$1
exponent=$2
power=1
for ((i=0; i < exponent; i++)) do
	power=$((base * power))
done
echo $power
