#!/bin/bash
gcc -wall -pedentic -Werror -Wextra -c *.c
ar -rc liball.c *.c
ranlib liball.c
ar -t libmy.c
nm libmy.c
