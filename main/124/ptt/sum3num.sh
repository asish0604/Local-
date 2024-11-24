#!/bin/bash
if [ $# -ne 3 ]; then
	echo "Usage: num1 num2 num3"
	exit 1
fi
num1=$1
num2=$2
num3=$3
sum=$((num1 + num2 + num3))
echo $sum 
