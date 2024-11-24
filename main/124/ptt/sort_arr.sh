#!/bin/bash
number=(10 20 30 40 50)
sort_asc=($(for num in "${number[@]}"; do echo "$number"; done | sort -n))
echo "sorted array ${sort_asc[@]}"
