#1/bin/bash
DIRECTORY="."
ls -lh "$DIRECTORY"|awk '{print $1" "$5" "$9}'
