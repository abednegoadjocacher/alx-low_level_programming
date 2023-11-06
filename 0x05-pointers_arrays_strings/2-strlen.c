#include "main.h"
/**
 * _strlen - The length of string
 * @s: The string
 * Length: The length
 * Return: The length of string
 */
int _strlen(char *s)
{
	char length = 0;

	while (*s++)
	length++;
	return (length);
}
