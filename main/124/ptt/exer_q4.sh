#!/bin/bash
if [ $# -lt 2 ]; then
echo "Usage: $0 <noOfTerms> <valueofterms>"
exit 1
fi
sum=0
count=$1
for (( i=2; i<=$((count + 1)); i++ ))
do
	sum=$(( sum + ${!i} ))
done
echo $sum


