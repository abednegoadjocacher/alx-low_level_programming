#include "main.h"
/**
 * _islower(int c)- Is lower
 * @c: The character used
 * Return: 1 for lowercase or 0 for anything
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
