#include "main.h"

int print_last_digit(int a) {
  int last_digit;

  /* Find the last digit of the number. */
  last_digit = a % 10;

  /* If the last digit is negative, make it positive. */
  if (last_digit < 0) {
    last_digit = last_digit * -1;
  }

  /* Print the last digit. */
  _putchar(last_digit + '0');

  /* Return the last digit. */
  return last_digit;
}
