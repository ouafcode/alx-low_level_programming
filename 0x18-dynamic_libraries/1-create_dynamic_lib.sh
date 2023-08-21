#!/bin/bash
gcc -Wall -fpic -c *.c
gcc -o -shared liball.so *.o
