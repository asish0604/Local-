#!/bin/bash
 
mod() {
	local dividend=$1
	local divisor=$2
	if [ $divisor -eq 0 ]; then
		echo "Error: Division by zero is not allowed"
	else
		local result=$((dividend % divisor))
		echo "Remainder:$result"
	fi
}
mod 12 5
