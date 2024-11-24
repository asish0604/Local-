#!/bin/bash
fibonacci() {
        local n=$1
        local a=0
        local b=1
        local i

        echo -n "$a "
        for i in $(seq 2 $n); do
                local temp=$a
                a=$b
                b=$((temp+b))
                echo -n "$b "
        done
        echo
}

echo "Enter the number of terms: "
read n
fibonacci $n
