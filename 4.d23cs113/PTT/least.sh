#!/bin/bash

if [ $# -ne 3 ]; then
    echo "Usage: least num1 num2 num3"
    exit 1
fi

if [ $1 -le $2 ]; then
    if [ $1 -le $3 ]; then
        echo $1
    else
        echo $3
    fi
else
    if [ $2 -le $3 ]; then
        echo $2
    else
        echo $3
    fi
fi
