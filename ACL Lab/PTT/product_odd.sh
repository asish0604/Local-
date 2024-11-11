#!/bin/bash

product=1
for ((i=$1; i<=$2; i++)); do
    if [ $((i % 2)) -ne 0 ]; then
        product=$((product * i))
    fi
done
echo $product
