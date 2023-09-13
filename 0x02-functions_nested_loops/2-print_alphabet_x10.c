#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase ten times.
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++) /* Loop to print the alphabet ten times */
	{
		letter = 'a';
		while (letter <= 'z') /* Loop to print each letter */
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n'); /* New line after each set of alphabet */
	}
}
