#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *head)
{
    size_t count = 0;

    while (head)
    {
        count++;
        head = head->next;
    }

    return (count);
}

