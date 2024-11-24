#!/bin/bash

 
echo "Number of value: $number"
read number

sum=0

for (( i=0; i<number; i++)); do
	read value
	sum=$((sum+value))
done

echo "Sum: $sum"

