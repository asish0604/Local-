#!/bin/bash

if [ $# -lt 1 ]; then 
	echo "Usage: $0 <NumberOfValue> [values...]"
	exit 1
fi
count=$1
shift

if [ $# -lt $count ]; then
	echo "error"
	exit 1
fi

sum=0
for i in $(seq 1 $count); do
	sum=$((sum + $1))
	shift
done
echo "Result -> $sum"

