#!/bin/bash

dividend=$1
divisor=$2

if [ "$divisor" -eq 0 ]; then
    echo "Division by zero is not allowed"
    exit 1
fi

remainder=$((dividend % divisor))

if [ "$remainder" -eq 0 ]; then
    echo "yes"
else
    echo "no"
fi