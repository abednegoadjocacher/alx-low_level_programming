#include "main.h"
/**
 * _memset - sets the first n bytes of the memory area
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++, n--)
{
s[i] = b;
}
return (s);
}
