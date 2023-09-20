#include "main.h"
#include <stdio.h>

int main(void)
{
    int num = 10;
    int *ptr = &num;

    printf("Before update: %d\n", *ptr);

    update_to_98(ptr);

    printf("After update: %d\n", *ptr);

    return 0;
}
