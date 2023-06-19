#!/bin/bash
gcc -wall -Wextra -Werror -pedantic -c -FPIC *.c
gcc -shared -o libdynamic.so *.c
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
