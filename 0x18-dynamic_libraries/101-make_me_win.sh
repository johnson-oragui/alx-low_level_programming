#!/bin/bash
gcc -shared -o myprintf.so -fPIC test.c
export LD_PRELOAD=/alx-low_level_programming/0x18-dynamic_libraries/myprintf.so
