#!/bin/bash
echo "Please enter a number"
read N
fact = 1
while [ $N -gt 1 ]
do
	fact = $(( fact * N ))
        N =$(( N - 1))
done
echo "$fact"




