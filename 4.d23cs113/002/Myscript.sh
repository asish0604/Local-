#!/bin/sh 
#Shell script that check if a directory exists and if not create 
DIRECTORY = "/path/to/directory"
if [d "$DIRECTORY"]; then
	echo "Directory exist"
else
	echo "Directory doesnt exist. create a new directory"
	mkdir $DIRECTORY 
	echo "Directory created"
fi
