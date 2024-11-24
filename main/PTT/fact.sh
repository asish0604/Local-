#!/bin/bash

factorial() {
    local n=$1
    local result=1
    for ((i=1; i<=$n; i++)); do
        result=$((result * i))
    done
    echo $result
}

echo "  n  | factorial"
echo "-----|----------"
for ((i=$1; i<=$2; i++)); do
    echo "  $i  | $(factorial $i)"
done
