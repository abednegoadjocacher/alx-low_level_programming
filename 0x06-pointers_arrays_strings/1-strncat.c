#include "main.h"
/**
 * _strncat - concatenates two strings
 * @n: The numberof bytes
 * @dest: The string to append
 * @src: The number of bytes to append to dest
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index]  && index < n; index++)
	dest[dest_len++] =  src[index];
	return (dest);
}

