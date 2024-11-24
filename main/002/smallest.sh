#!/bin/bash

if [ $# -ne 3 ]; then
	echo "usage: $0 <n1> <n2> <n3>"
	exit 1
fi

n1=$1
n2=$2
n3=$3

if [ $n1 -le $n2 ]&& [ $n1 -le $n3 ]; then 
	smallest=$n1
elif [ $n2 -le $n1 ] && [ $n2 -le $n3 ]; then
	smallest=$n2
else	
	smallest=$n3
fi

echo "Smallest number: $smallest"
