#include "main.h"

/**
 * string_toupper - Converts string in lowercase to uppercase letters
 * @s: The pointer to string
 *
 * Return: string
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 90)
		{
			i++;
			continue;
		}
		else if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
			i++;
		}
		else
			i++;
	}
	return (s);
}
