#!/bin/bash
DIRECTORY="dir1"
if [ -d "$DIRECTORY" ]; then
	echo "Directory already exists"
else
	echo "directory does not exist.Creating now.."
	mkdir $DIRECTORY
	echo "Directory $DIRECTORY created"
fi
