#include "main.h"
#include <stdio.h>

/**
 * positive_or_negative - Prints whether an integer is positive, negative, or zero.
 * @i: The integer to check
 */
void positive_or_negative(int i) {
    if (i > 0) {
        printf("%d is positive\n", i);
    } else if (i < 0) {
        printf("%d is negative\n", i);
    } else {
        printf("%d is zero\n", i);
    }
}

int main(void) {
    int i;
    i = 98;
    positive_or_negative(i);
    return (0);
}
