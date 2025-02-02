#!/bin/sh
if [ " $# " -ne 2 ]; then
	 echo "Usage: divisible dividend divisor"
	exit 1
fi
dividend=$1
divisor=$2
if [ $divisor -eq 0 ]; then
	echo "division by zero is invalid"
	exit 1
fi
	
while [ $dividend -ge $divisor ]; do
	dividend=$((dividend-divisor))
done

	if [ "$dividend" -eq 0 ]; then
		echo "yes"
	else
		echo "no"
	fi


