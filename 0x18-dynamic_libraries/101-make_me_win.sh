#!/bin/bash
gcc -fPIC -c test.c
gcc -shared -o libtest.c test.o
LD_PRELOAD=/$PWD/libtest.so ./gm 9 8 10 24 75 9
