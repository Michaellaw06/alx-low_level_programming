#include "main.h"
/**
* _strncpy - Copy at most n characters from src to dest
* @src: The source string
* @dest: The destination string
* @n: The maximum number of characters to copy
*
* Return: Pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
int k = 0;
while (k < n && src[k] != '\0')
{
dest[k] = src[k];
k++;
}
while (k < n)
{
dest[k] = '\0';
k++;
}
return (dest);
}
