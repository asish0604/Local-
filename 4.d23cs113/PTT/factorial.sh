#!/bin/bash
factorial() {
        local num=$1
        local result=1
        local i

        for i in $(seq 1 $num); do
                result=$((result*i))
        done
        echo $result
}

echo "Enter a number: "
read num
result=$(factorial $num)
echo "The factorial of $num is: $result"#!/bin/bash
factorial() {
        local num=$1
        local result=1
        local i

        for i in $(seq 1 $num); do
                result=$((result*i))
        done
        echo $result
}

echo "Enter a number: "
read num
result=$(factorial $num)
echo "The factorial of $num is: $result"
