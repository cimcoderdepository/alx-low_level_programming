#!/bin/bash
gcc -c *.c
gcc -shared -o 100-opearations.so  *.o
# TASK 2:
# This script creates a dynamic library called
# (100-operations.so) from all the .c files that are
# in the current directory.
