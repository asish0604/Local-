#!/bin/sh
echo "please enter a number to check"
read num

iseven() {
	if [ $((num % 2)) -eq 0 ]; then
	echo "the number is even"
else 
	echo "the number is odd"
	fi
}
iseven "$num"
