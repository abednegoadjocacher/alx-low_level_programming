#include"main.h"
/**
 * print_diagonal - Print the diagonal distance
 * @n: The diagonal of line
 * Return: nothing
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n > 0)
		{
			_putchar('\\');
			n--;
		}
		_putchar('\n');
	}
}
