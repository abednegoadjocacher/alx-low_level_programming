#include "main.h"

/**
 * puts_half - Prints the second half of a string using while loop
 * @str: Pointer to the string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length] != '\0')
	{
		length++;
	}
		if (length % 2 == 0)
			start = length / 2;
		else
			start = (length - 1) / 2 + 1;
	i = start;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

