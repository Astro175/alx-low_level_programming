#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -c fPIC *.c
gcc -share -o liball.so *.o
