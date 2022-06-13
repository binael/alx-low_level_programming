#!/bin/bash
gcc -fPIC -g -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
