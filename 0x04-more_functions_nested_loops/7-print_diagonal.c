#include"main.h"
/**
 * print_diagonal - Print the diagonal distance
 * @n: The diagonal of line
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, space;

	i = space = 0;
	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		space = 0;
		while (space < i)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
