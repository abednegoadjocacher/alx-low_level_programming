#include"main.h"
/**
 * print_square - Print the square of #
 * @size: the argument passed to the function
 * Return: nothing
 */
void print_square(int size)
{
	int outer = 0;

	if (size <= 0)
		_putchar('\n');
	while (outer < size)
	{
		int inner = 0;

		while (inner < size)
		{
			_putchar('#');
			inner++;
		}
		outer++;
		_putchar('\n');
	}
}
