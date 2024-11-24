#!/bin/bash
n=$1	
sum=0
for num in "$@"; do
	sum=$((sum + num))
done
echo $sum
