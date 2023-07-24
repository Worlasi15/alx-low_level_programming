#!/bin/bash
gcc -Wall -wextra -werror -pedantric -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
