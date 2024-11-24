#!/bin/bash
number=(10 20 30 40 50)
sum=0
for num in "${number[@]}"; do
	sum=$((sum + num))
	done
echo "the sum is $sum"
