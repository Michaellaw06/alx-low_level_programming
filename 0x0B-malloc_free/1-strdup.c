#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate string to new memory location
 * @str: input string
 * Return: Pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	dup_str[len] = '\0';

	return (dup_str);
}
