#!/bin/bash

dividend=$1
divisor=$2

if [ $divisor -eq 0 ]; then
  echo "Error: Division by zero is not allowed"
  exit 1
fi

remainder=$dividend

for ((i=$divisor; i<=$dividend; i+=$divisor)); do
  ((remainder-=divisor))
done

echo "The remainder of $dividend divided by $divisor is $remainder"
