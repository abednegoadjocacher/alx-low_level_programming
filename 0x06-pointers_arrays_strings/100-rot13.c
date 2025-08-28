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
	char mixed_alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char reverse_mixed_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		j = 0;
		while (mixed_alpha[j] != '\0')
		{
			if (s[i] == mixed_alpha[j])
			{
				s[i] = reverse_mixed_alpha[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
