#!/bin/bash

number=(10 5 76 62 19)
echo "original array $number[*]"

sum=0
for num in ${number[@]}; do
	sum=$((sum+num))
done 
echo "SUM: $sum"

