#include "main.h"
/**
 * leet - Change some letters to numbers
 * @s: The pointer to string
 * 
 * Return: s
 *
 */

char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = 4 +'0';
		}
		else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = 3 +'0';
		}
		else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = 0 +'0';
		}
		else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = 1 +'0';
		}
		else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = 7 +'0';
		}
		else
			i++;
	}
	return (s);
}
