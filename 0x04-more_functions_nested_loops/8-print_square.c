#include"main.h"
/**
 * print_square - Print the square of #
 * @size: the argument passed to the function
 * Return: nothing
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		_putchar('#');
		size--;
	}
	_putchar('\n');
}
