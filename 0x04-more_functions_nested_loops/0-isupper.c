#include <stdio.h>
#include <ctype.h>

int my_isupper(int c);

int main(void)
{
    char c = 'A';
    printf("%c: %d\n", c, my_isupper(c));
    return (0);
}

int my_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
