#include <stdio.h>

/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 and prints '+' if n is greater than zero,
 *         0 and prints '0' if n is zero,
 *        -1 and prints '-' if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = 42; /* Replace with the number you want to check */
	int result = print_sign(number);

	(void)result; /* To avoid the "unused variable" warning */
	putchar('\n'); /* Print a newline character */

	return (0);
}
