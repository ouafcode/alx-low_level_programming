#!/bin/bash
gcc -Wall -fPIC -c *.c
gcc -o -shared liball.so *.o
