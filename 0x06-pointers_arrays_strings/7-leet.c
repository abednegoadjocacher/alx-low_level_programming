#include "main.h"
/**
 * leet - Change some letters to numbers
 * @s: The pointer to string
 * Return: s
 *
 */

char *leet(char *s)
{
	int i = 0, j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (letters[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
