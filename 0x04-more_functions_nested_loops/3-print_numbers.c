#include "main.h"
/**
 * print_numbers - Print number from 0-9
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
