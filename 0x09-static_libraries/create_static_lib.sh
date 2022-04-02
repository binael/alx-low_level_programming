#!/bin/bash
gcc -Wall -Werro -Wextra -pedantic -c *.c
ar -rc liball.a *.o
ranlib liball.a
