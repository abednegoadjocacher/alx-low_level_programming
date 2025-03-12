#include"main.h"
/**
 * _islower - Checks for lowercase alphabets
 * @c: The arugument to check
 * Return: 1 for success and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
