#include "main.h"
/**
 * _isalpha - Check for alpha
 * @c: The character used
 * Return: 1 for alphabetic characters or 0 for none
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
