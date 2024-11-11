#!/bin/bash

if [ $# -lt 2 ]; then
    echo "Usage: barchart n num1 num2 ... numn"
    exit 1
fi

n=$1
shift

for i in $(seq o $n) do
    num=$1
    if [ $num -lt 1 ] || [ $num -gt 30 ]; then
        echo "Error: number $num out of range (1-30)"
        exit 1
    fi
    bar=""
    for ((j=0; j<$num; j++)); do
        bar+="*"
    done
    echo "$bar"
    shift
done
