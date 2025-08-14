#include"main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
		{
			i++;
			continue;
		}
		else if (s1[i] != s2[i])
		{
			j = ((s1[i] - '0') - (s2[i] - '0'));
			break;
		}
		i++;
	}
	return (j);
}
