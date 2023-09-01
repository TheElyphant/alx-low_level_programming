#!/bin/bash

c_files=$(find . -maxdepth 1 -type f -name "*.c")

for file in $c_files; do
	gcc -c "$file"
done

ar rcs liball.a *.o

rm -f *.o

echo "Static library liball.a has been created."
