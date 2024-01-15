#!/bin/bashi
gcc -Wall -pedantic -Werror -Wextra -c -fPIC *.C
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
