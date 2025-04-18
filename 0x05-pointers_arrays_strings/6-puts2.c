#include"main.h"
/**
 * puts2 - Prints a string with newline
 * @str: The pointer to string
 * Return: void
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

