#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int pass[11];
    int i, sum;
    sum = 0;
    srand(time(NULL));

    for (i = 0; i < 11; i++)
    {
        if (i == 10)
        {
            pass[i] = (2772 - sum) % 78;
            sum += pass[i];
            putchar(pass[i] + 33);  /* Adding 33 to get the correct ASCII value for the desired characters */
        }
        else
        {
            pass[i] = rand() % 78;
            sum += pass[i];
            putchar(pass[i] + 33);  /* Adding 33 to get the correct ASCII value for the desired characters */
        }
    }

    return 0;
}
