#!/bin/bash
if [ $# -ne 2 ]; then
echo "Usage: $0 from to"
exit 1
fi
from=$1
to=$2
sum=0
for (( i=from; i<=to; i++ ))
do
	ifeven=$(( $i % 2 ))
	if [ $ifeven -eq 0 ]; then
	sum=$((sum + i))
	fi  
done
echo $sum

