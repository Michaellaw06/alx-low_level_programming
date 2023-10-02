#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return 1;
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return 0;
	}

	int coins[5] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	int i;

	for (i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			num_coins++;
			cents -= coins[i];
		}
	}

	printf("%d\n", num_coins);

	return 0;
}
