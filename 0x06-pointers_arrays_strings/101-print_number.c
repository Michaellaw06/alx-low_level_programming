#include "main.h"
#include <stdio.h>

/**
* print_number - Function to print an integer.
* @n: The integer to be printed.
*/
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10 != 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}
