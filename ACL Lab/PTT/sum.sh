#!/bin/bash

sum=0
count=$1
shift
for ((i=0; i<$count; i++)); do
    sum=$((sum + $1))
    shift
done
echo $sum
