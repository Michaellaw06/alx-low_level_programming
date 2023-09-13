#include "main.h"

/**
 * print_alphabet - Prints the alphabet in lowercase followed by two new lines
 */
void print_alphabet(void)
{
    char letter = 'a';

    while (letter <= 'z')
    {
        _putchar(letter);
        letter++;
    }

    _putchar('\n');
    _putchar('\n'); // This line prints two new lines
}
