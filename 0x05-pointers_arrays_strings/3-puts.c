#include"main.h"
/**
 * _puts - Prints a string with newline
 * @str: The pointer to string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

