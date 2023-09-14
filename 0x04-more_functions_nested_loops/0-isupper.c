#include <stdio.h>
#include <ctype.h> // Include the ctype.h header for isupper

int _isupper(int c);

int main(void)
{
    char c = 'A'; // Example character 'A'
    printf("%c: %d\n", c, _isupper(c)); // Use _isupper instead of isupper
    return (0);
}

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
