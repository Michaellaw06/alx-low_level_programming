#include <stdio.h>

unsigned long fibonacci(unsigned long n);
void print_fibonacci_sequence(int n);

int main(void)
{
	unsigned long n = 92; // Number of Fibonacci numbers to print
	print_fibonacci_sequence(n);

	return (0);
}

unsigned long fibonacci(unsigned long n)
{
	if (n <= 1)
		return n;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (unsigned long count = 2; count <= n; count++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}

	return (fib2);
}

void print_fibonacci_sequence(int n)
{
	for (int count = 0; count < n; count++)
	{
		printf("%lu", fibonacci(count));

		if (count < n - 1)
			printf(", ");
	}

	printf("\n");
}
