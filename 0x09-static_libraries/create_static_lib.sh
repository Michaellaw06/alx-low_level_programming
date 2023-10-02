#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.c *.c
ranlib liball.c
ar -t liball.c
nm liball.c
