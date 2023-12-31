#include <stdio.h>

/**
 * main - The main function
 *
 * Description: This program calculates and prints the first 92 numbers in
 * the Fibonacci sequence, separated by commas, and then continues with the
 * remaining numbers in the sequence.
 *
 * Return: Always 0.
 */
int main(void)
{
  int count;
  unsigned long fib1 = 0, fib2 = 1, sum;
  unsigned long fib1_half1, fib2_half1, fib1_half2, fib2_half2;
  unsigned long half1, half2;

  for (count = 0; count < 92; count++) {
    sum = fib1 + fib2;
    printf("%lu, ", sum);

    /* Move the opening brace to the next line. */
    {
      fib1 = fib2;
      fib2 = sum;
    }
  }

  fib1_half1 = fib1 / 10000000000;
  fib2_half1 = fib2 / 10000000000;
  fib1_half2 = fib1 % 10000000000;
  fib2_half2 = fib2 % 10000000000;

  for (count = 93; count < 99; count++) {
    half1 = fib1_half1 + fib2_half1;
    half2 = fib1_half2 + fib2_half2;

    if (fib1_half2 + fib2_half2 > 9999999999) {
      half1 += 1;
      half2 %= 10000000000;
    }

    printf("%lu%lu", half1, half2);

    if (count != 98)
      printf(", ");

    /* Move the opening brace to the next line and indent the code. */
    {
      fib1_half1 = fib2_half1;
      fib1_half2 = fib2_half2;
      fib2_half1 = half1;
      fib2_half2 = half2;
    }
  }

  printf("\n");

  return (0);
}
