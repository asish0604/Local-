#!/bin/bash
if [ "$#" -ne 2 ]; then
	echo "Usage : divisible <dividend> <divisor>"
	exit 1
fi
dividend=$1
divisor=$2
if [ "$divisor" -eq 0 ]; then
	echo "Error! not allowed"
	exit 1
fi

while [ $dividend -ge $divisor ]; do
	dividend=$(($dividend - $divisor))
done

if [ $dividend -eq 0 ]; then
	echo "Result -> yes"
else
	echo "Result -> no"
fi
