#!/bin/sh
a=10
b=20

val=$(expr $a + $b)
echo "a + b : $val"

val=$(expr $a - $b)
echo "a - b : $val"

val=$(expr $a \* $b)
echo "a * b : $val"

val=$(expr $b / $a)
echo "b / a : $val"

val=$(expr $b % $a)
echo "b % a : $val"

if [ $a -eq $b ]; then
    echo "a is equal to b"
fi

if [ $a -ne $b ]; then
    echo "a is not equal to b"
fi
