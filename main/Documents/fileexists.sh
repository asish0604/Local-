#!/bin/bash
FILENAME="script.txt"
 if [ -f"$FILENAME" ]; then
	 echo "File $FILENAME exists in the current directory"
 else
	 touch "$FILENAME"
	 echo "File $FILENAME cearted in the current directory"
 fi
