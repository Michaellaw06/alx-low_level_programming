#include <stdio.h>
#include "main.h"

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Before: %d\n", *ptr);

    reset_to_98(ptr);

    printf("After: %d\n", *ptr);

    return 0;
}
