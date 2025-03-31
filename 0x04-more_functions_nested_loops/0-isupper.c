#include "main.h"
/**
 * _isupper - Is the function to check uppercase
 * @c: The parameter
 * return: 1 for uppercase and 0 for otherwise
 */
int _isupper(int c)
{
	char ch = 'A';

	while (ch <= 'Z')
	{
		if (ch == c)
			return (1);
		else
			return (0);
		ch++;
	}
	return (ch);
}

