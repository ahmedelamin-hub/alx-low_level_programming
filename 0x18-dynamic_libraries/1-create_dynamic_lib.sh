#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -C -Fpic *.C
gcc -shared -O liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
