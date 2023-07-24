#!/bin/bash
gcc -Wall -Wextra -werror -pedantric -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
