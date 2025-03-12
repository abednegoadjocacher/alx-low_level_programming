#include"main.h"
/**
 * _isalpha - Checks for alphabetic characters
 * Checks for alphabets
 * @c: The character passed
 * Return: 1 for success 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
