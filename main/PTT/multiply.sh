#!/bin/bash

multiply() {
        local num1=$1
        local num2=$2
        local result

        result=$(echo "$num1 * $num2" | bc -l)
        echo "$result"
}

if [ $# -ne 2 ]; then
        echo "Usage: $0 <num1> <num2>"
        exit 1
fi

multiply $1 $2
