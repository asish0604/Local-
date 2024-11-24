#!/bin/bash
DIRECTORY="."
FILE_COUNT=$( find "$DIRECTORY" -type f | wc -l)
DIRECTORY_COUNT=$( find "$DIRECTORY" -type d | wc -l)
echo "Number of files: $FILE_COUNT"
echo "Number of directories : $DIRECTORY_COUNT"
