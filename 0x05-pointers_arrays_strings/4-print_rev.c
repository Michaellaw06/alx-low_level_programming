#include <unistd.h>

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: Pointer to the string.
 */
void print_rev(char *s)
{
int length = 0;
int i;
while (s[length] != '\0')
length++;
for (i = length - 1; i >= 0; i--)
write(1, &s[i], 1);
write(1, "\n", 1);
}
