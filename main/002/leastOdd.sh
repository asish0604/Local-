#!/bin/bash 
if [ $# -ne 2 ]; then
       echo "Usage: $0 <n> <m>"
exit 1
fi

n=$1
m=$2
if [ $n -gt $m ]; then
	echo "Error n should be less than or equal to m"
	exit 1
fi
sum=0
for ((i=n; i<=m; i++)); do
	if (( i % 2 != 0 )); then

		sum=$((sum + i))
	fi
done
 echo "Sum of odd integers from $n to $m is: $sum"



