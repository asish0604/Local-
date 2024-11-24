#!/bin/bash

 quotient() { 
	local dividend=$1
	local divisor=$2
	if [ $divisor -eq 0 ]; then
		echo "Error!!not possible"
	else
		local result=$((dividend / divisor))
	echo "Quotient:$result"
	fi
}
quotient $1 $2

