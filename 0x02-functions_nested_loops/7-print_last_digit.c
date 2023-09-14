#include "main.h"

/**
 * print_last_digit - entry point
 *
 * Description: function that prints the last digit of a number.
 *
 * @a: number to compute last digit
 *
 * Return: last digit
 */
int print_last_digit(int a)
{
  int last_digit;

  last_digit = a % 10;

  // Use `abs()` instead of `last_digit * -1` to comply with Betty style guide.
  last_digit = abs(last_digit);

  _putchar(last_digit + '0');

  return (last_digit);
}
