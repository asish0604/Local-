#!/bin/bash

average() {
sum=0
count=0

for num in "$@"; do
	sum=$((sum + num))
	count=$((count + 1))
done

if [ $(count) -eq 0 ]; then
	echo "No numbers are entered"
else
average=$(echo "sum / count" |bc)
echo "Average SUM: $average"
fi
}


echo "Enter the number:"
read -a number


average "${average[@]}"
