#include "main.h"
/**
 * _strlen_recursion - Calculate the length of a sting
 * @s: A pointer to the string
 * Return: The length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = 1 + _strlen_recursion(s + 1);
	return (len);
}
