#!/bin/bash
i=1
while [ $i -le 10 ]
do
	echo $i
	let n=$(($n+2))
done
