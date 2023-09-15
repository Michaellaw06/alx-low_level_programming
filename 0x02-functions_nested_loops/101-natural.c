#include <stdio.h>

int main(void)
{
	int sum = 0;

	for (int i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}

	printf("natural numbers below 10 that are multiples of 3 or 5");
	printf("3, 5, 6, and 9. The sum of these multiples is %d.\n", sum);

	return (0);
}
