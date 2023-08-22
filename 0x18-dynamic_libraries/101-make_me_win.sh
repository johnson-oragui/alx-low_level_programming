#!/bin/bash
gcc -shared -o myprintf.so -fPIC test.c
export LD_PRELOAD=./myprintf.so
./gm 9 8 10 24 75 9
