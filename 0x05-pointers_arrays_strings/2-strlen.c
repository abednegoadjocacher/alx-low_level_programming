#include"main.h"
/**
 * _strlen - Calculate the length of string
 * @s: A pointer to the string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		s++;
		string_length++;
	}
	return (string_length);
}

