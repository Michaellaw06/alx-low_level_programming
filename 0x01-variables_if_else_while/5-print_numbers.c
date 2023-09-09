#include <stdio.h>

/**
 * main - Program that prints all single-digit numbers of base 10, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
    char digit;

    for (digit = '0'; digit <= '9'; digit++)
    {
        putchar(digit);
    }
    putchar('\n');

    return (0);
}
