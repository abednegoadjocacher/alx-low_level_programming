#include "main.h"
/**
 * _strncpy - copy of a string
 * @dest: The buffer string
 * @src: The source string
 * @n: The maximun number
 * Return:  A pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
	src_len++;

	for (index = 0; src[index] && index < n; index++)
	dest[index] = src[index];

	for (index =  src_len; index < n; index++)
	dest[index] = '\0';

	return (dest);
}
