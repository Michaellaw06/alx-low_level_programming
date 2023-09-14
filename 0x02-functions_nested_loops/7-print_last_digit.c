#include <stdio.h>

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @number: The input number.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int number)
{
    /* Ensure the number is positive */
    if (number < 0)
    {
        number = -number;
    }

    /* Get the last digit by taking the remainder when divided by 10 */
    int last_digit = number % 10;

    /* Print the last digit */
    printf("The last digit is: %d\n", last_digit);

    /* Return the value of the last digit */
    return last_digit;
}

/**
 * main - Entry point of the program.
 *
 * Return: Always returns 0 to indicate success.
 */
int main(void)
{
    int number = 12345; // Replace with your desired number
    int last_digit = print_last_digit(number);

    return 0;
}
