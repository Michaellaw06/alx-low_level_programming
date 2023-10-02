!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

liball.c/       0           0     0     644     37370     `
!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

liball.c/       0           0     0     644     29884     `
!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

liball.c/       0           0     0     644     22398     `
!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

liball.c/       0           0     0     644     14912     `
!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

liball.c/       0           0     0     644     7426      `
!<arch>
0-isupper.c/    0           0     0     644     272       `
#include "main.h"

/**
 * _isupper - Check if a character is an uppercase letter.
 * @c: The character to check.
 *
 * Return: 1 if the character is an uppercase letter, 0 otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
0-memset.c/     0           0     0     644     283       `
#include "main.h"
/**
* _memset - main function of the prototype
* @b: The value used to fill the memory
* @s: Function paramater
* @n: Function parameter
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}

0-strcat.c/     0           0     0     644     337       `
#include "main.h"
/**
*_strcat - main function of the prototype
*
* @src: Concatenation parameter
*
* @dest: Concatenation parameter
*
* Return: dest
*/
char *_strcat(char *dest, char *src)
{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')
{
k++;
}
while (src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}

100-atoi.c/     0           0     0     644     527       `
#include "main.h"

/**
* _atoi - converts a string to an integer
* @s: string to be converted
*
* Return: the int converted from the string
*/
int _atoi(char *s)
{
int i, d, n, len, f, digit;
i = 0;
d = 0;
n = 0;
len = 0;
f = 0;
digit = 0;
while (s[len] != '\0')
len++;
while (i < len && f == 0)
{
if (s[i] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d % 2)
digit = -digit;
n = n * 10 + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}

1-isdigit.c/    0           0     0     644     200       `
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
1-memcpy.c/     0           0     0     644     302       `
#include "main.h"
/**
* _memcpy - main function prototype
*
* @src: Source parameter
* @dest: Destination parameter
* @n: Function parameter
* Return: Copied memory
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int k;
for (k = 0; k < n; k++)
{
dest[k] = src[k];
}
return (dest);
}
1-strncat.c/    0           0     0     644     366       `
#include "main.h"
/**
* _strncat  - the main function
*
* @n: Function parameter
*
* @src: Function parameter
*
* @dest: Function parammeter
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
int k, r;
k = 0;
r = 0;
while (dest[k] != '\0')

{
k++;
}
while (r < n && src[r] != '\0')
{
dest[k] = src[r];
k++;
r++;
}
dest[k] = '\0';
return (dest);
}
2-strchr.c/     0           0     0     644     248       `
#include "main.h"

/**
* _strchr - main function
*
* @s: Function parameter
*
* @c: Function parameter
*
* Return: Always o.
*/
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >= '\0'; k++)
{
if (s[k] == c)
return (s + k);
}
return (0);
}
2-strlen.c/     0           0     0     644     233       `
#include "main.h"
/**
 * _strlen - Calculates the length of a string.
 * @s: Pointer to the string.
 * Return: Length of the string.
 */
int _strlen(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
return (length);
}

2-strncpy.c/    0           0     0     644     387       `
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

3-islower.c/    0           0     0     644     253       `
#include "main.h"

/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

3-puts.c/       0           0     0     644     217       `
#include <unistd.h>

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
write(1, str, 1);
str++;
}
write(1, "\n", 1);
}

3-strcmp.c/     0           0     0     644     285       `
#include "main.h"
/**
* _strcmp - The main function
*
* @s1: Function parameter
*
* @s2: Function parameter
*
* Return: s1, s2
*/
int _strcmp(char *s1, char *s2)
{
int k = 0;
while (s1[k] != '\0' && s2[k] != '\0')
{
if (s1[k] != s2[k])
{
return (s1[k] - s2[k]);
}
k++;
}
return (0);
}

3-strspn.c/     0           0     0     644     392       `
#include "main.h"

/**
* _strspn - main function
* @s: Function parameter
* @accept: Function parameter
* Return: Always 0.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int _strspn(char *s, char *accept);
unsigned int i = 0;
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
{
i++;
break;
}
else if (accept[k + 1] == '\0')
return (i);
}
s++;
}
return (i);
}
4-isalpha.c/    0           0     0     644     357       `
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if c is alphabetic, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1); /* c is an alphabetic character */
	}
	else
	{
		return (0); /* c is not an alphabetic character */
	}
}

4-strpbrk.c/    0           0     0     644     325       `

#include "main.h"

/**
* _strpbrk - main function of the prototype
* @s: function parameter
* @accept: Fuunction parameter
* Return: Always 0.
*/
char *_strpbrk(char *s, char *accept)
{
int k, j;
for (k = 0; s[k] != '\0'; k++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[k] == accept[j])
return (s + k);
}
}
return (0);
}

5-strstr.c/     0           0     0     644     358       `
#include "main.h"

/**
* _strstr - main function
* @needle: function parameter
*
* @haystack: function parameter
*
* Return: Always 0.
*/
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *I = haystack;
char *P = needle;
while (*I == *P && *P != '\0')
{
I++;
P++;
}
if (*P == '\0')
return (haystack);
}
return (0);
}
6-abs.c/        0           0     0     644     304       `
#include "main.h"

/**
 * _abs - Computes the absolute value of a number.
 * @c: The number to compute the absolute value for.
 *
 * Return: Absolute value of c.
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;
		/* Add a blank line here */
		abs_val = c * -1;

		return (abs_val);
	}

	return (c);
}
9-strcpy.c/     0           0     0     644     321       `
#include "main.h"

/**
* char *_strcpy - a function that copies the string pointed to by src
* @dest: copy to
* @src: copy from
* Return: string
*/
char *_strcpy(char *dest, char *src)
{
int l = 0;
int x = 0;
while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

_putchar.c/     0           0     0     644     239       `
#include <unistd.h>
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

