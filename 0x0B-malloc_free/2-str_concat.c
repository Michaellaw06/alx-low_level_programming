#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two input strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
        char *concatenated;
        int i = 0, j = 0;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        while (s1[i] != '\0')
                i++;

        while (s2[j] != '\0')
                j++;

        concatenated = malloc(sizeof(char) * (i + j + 1));

        if (concatenated == NULL)
                return (NULL);

        i = j = 0;

        while (s1[i] != '\0')
        {
                concatenated[i] = s1[i];
                i++;
        }

        while (s2[j] != '\0')
        {
                concatenated[i] = s2[j];
                i++, j++;
        }

        concatenated[i] = '\0';

        return (concatenated);
}
