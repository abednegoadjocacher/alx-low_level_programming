#include "main.h"
/**
 * rot13 - A function that encodes strings
 * @s: The pointer to string
 * Return: s
 *
 */

char *rot13(char *s)
{
	int i = 0, j;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char revA[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				s[i] = revA[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
