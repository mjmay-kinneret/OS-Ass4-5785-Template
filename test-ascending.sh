#!/bin/bash

filename="$1"

# Initialize a variable to store the previous number
prev_num=0

# Read the file line by line
while read -r line; do
    # Convert the line to a number
    current_num=$(echo "$line" | tr -d '[[:alpha:][:punct:][:space:]]')

    # Check if the current number is greater than the previous one
    if [ "$current_num" -le "$prev_num" ]; then
        echo "false"
        exit 0
    fi

    prev_num="$current_num"
done < "$filename"

echo "true"
