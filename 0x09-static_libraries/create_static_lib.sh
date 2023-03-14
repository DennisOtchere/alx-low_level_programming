#!/bin/bash

# list all .c files and store in c_files 
c_files = $(ls *.c)

# generate object files from .c files stored in $c_files
for file in $c_files
do
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
done

# create static library liball.a
ar -rc liball.a *.o
