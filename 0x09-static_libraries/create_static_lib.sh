#!/bin/bash
*create the objext files
gcc -Wall -pedantic -Werror -Wextra -c *.c
*generate the static library
ar -rc liball.c *.c
*indexing
ranlib liball.c
