#!/bin/bash
multiply(){
	local num1=$1
	local num2=$2
	echo "Multiplication of $num1 and $num2 is $((num1 * num2))"
}
multiply 4 5

