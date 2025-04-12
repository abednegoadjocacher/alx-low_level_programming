#include"main.h"
/**
 * print_triangle - Print triangles
 * @size: the argument passed
 * Return: nothing
 */
void print_triangle(int size)
{
	int outer = 0;

	if (size <= 0)
		_putchar('\n');
	while (outer < size)
	{
		int inner = 0;
		int hash = 0;

		while (inner < size - outer - 1)
		{
			_putchar(' ');
			inner++;
		}
		while (hash <= outer)
		{
			_putchar('#');
			hash++;
		}
		_putchar('\n');
		outer++;
	}
}

