#!/bin/bash
if [ "$#" -ne 2 ]; then
echo "Usage: quotient <num1> <num2>"
fi
num1=$1
num2=$2
let "result = num1 / num2"
echo "result: $result"
