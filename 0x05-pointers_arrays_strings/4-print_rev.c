#include"main.h"
/**
 * print_rev - Prints a string in reverse with a newline
 * @s: The pointer to string
 * Return: void
 */
void print_rev(char *s)
{
	int length_string = 0;

	while (s[length_string] != '\0')
	{
		length_string++;
	}
	length_string -= 1;
	while (length_string >= 0)
	{
		_putchar(s[length_string]);
		length_string--;
	}
	_putchar('\n');
}

