#include "main.h"
#include <stdio.h>

void update_to_98(int *n);  

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Before: %d\n", *ptr);

    update_to_98(ptr);

    printf("After: %d\n", *ptr);

    return 0;
}
