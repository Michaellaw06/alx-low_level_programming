#include <stdio.h>
#include <ctype.h>

int my_isupper(int c);

int main(void)

int my_isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    else
        return (0);
}
