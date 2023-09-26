#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pass[100];
    int i, sum, n;
    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 11; i++)
    {
        if (i == 10)
        {
            pass[i] = (2772 - sum) - '0';
            sum += pass[i] + '0';
            putchar(pass[i] + '0');
        }
        else
        {
            pass[i] = rand() % 78;
            sum += (pass[i] + '0');
            putchar(pass[i] + '0');
        }
    }

    return 0;
}
