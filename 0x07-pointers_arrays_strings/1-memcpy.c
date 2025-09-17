#include "main.h"
/**
 * _memcpy - A function that copies memory area.
 * @src: pointer to source
 * @dest: pointer to destination
 * @n: unsigned int
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (n != 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
