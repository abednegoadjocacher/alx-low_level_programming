#include"main.h"
/**
 * rev_string - Prints a string in reverse with a newline
 * @s: The pointer to string
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	while (s[length] != '\0')
	{
		length++;
	}
	length -= 1;
	while (i < length)
	{
		temp = s[i];
		s[i] = s[length];
		s[length] = temp;
		i++;
		length--;
	}
}

