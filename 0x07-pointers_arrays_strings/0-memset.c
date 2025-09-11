#include "main.h"
/**
 * _memset - sets the first n bytes of the memory area
 * @s: pointer to char
 * @b: char
 * @n: unsigned int
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (n != 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
