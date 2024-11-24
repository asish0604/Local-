#!/bin/bash

number=(10 5 32 3 4)
echo "Number of elements ${#number[@]}"
echo " The elements are ${number[*]}"

#sum of all elements
sum=0
for num in ${number[@]};do
	sum=$((sum + num))
done
echo "The sum is :$sum"

