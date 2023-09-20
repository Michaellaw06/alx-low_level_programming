#include "main.h"
#include <stdio.h>
char *_strncat(char *dest, char *src, int n) {
int dest_len = 0;
while (dest[dest_len] != '\0')
dest_len++;

for (int i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len++] = src[i];

dest[dest_len] = '\0';

(return dest);
}

main(void) 
{
char dest[20] = "Hello, ";
char src[] = "world!";
int n = 5;

printf("Concatenated string: %s\n", _strncat(dest, src, n));
return 0;
}

