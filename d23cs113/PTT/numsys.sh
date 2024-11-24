#!/bin/bash
echo "Converting $2 to $1"
    if [ "$1" == "binary" ]; then
        echo "obase=2; $2" | bc
    elif [ "$1" == "hex" ]; then
        echo "obase=16; $2" | bc
    elif [ "$1" == "octal" ]; then
        echo "obase=8; $2" | bc
    else
        echo "Unknown number system"
fi
