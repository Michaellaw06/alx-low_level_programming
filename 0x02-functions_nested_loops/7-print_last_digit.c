#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @a: The input number.
 *
 * Return: The last digit.
 */
int print_last_digit(int a)
{
	int last_digit;

	last_digit = a % 10;

	/* Use `abs()` instead of `last_digit * -1` to comply with the Betty style guide. */
	last_digit = abs(last_digit);

	return (last_digit);
}
