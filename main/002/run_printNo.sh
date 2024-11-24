#!/bin/bash

for N in {10..20}
do
	./printNo $N >output_$N.txt
	echo "OUTPUT for N=$N stored in output_$N.txt"
done
