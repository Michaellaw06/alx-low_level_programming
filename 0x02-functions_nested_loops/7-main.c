#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n) {
  int last_digit = n % 10;
  return last_digit;
}

int main() {
  int r;

  r = print_last_digit(98);
  printf("%d\n", r);

  r = print_last_digit(0);
  printf("%d\n", r);

  r = print_last_digit(-1024);
  printf("%d\n", r);

  return 0;
}
