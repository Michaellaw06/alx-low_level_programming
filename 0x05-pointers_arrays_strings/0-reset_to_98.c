#include "main.h"
#include <stdio.h>
/**
* updpdate_to_98  updates the value pointed to by a pointer to 98.
 * @n: Pointer to an integer to be updated.
 */
void update_to_98(int *n)
{
    if (n != NULL)
        *n = 98;
}
