#include"main.h"
/**
 * print_times_table - Print the times table
 * @n: the number
 * Return: nothing
 */
void print_times_table(int n)
{
	int multiplier, product;

	multiplier = product = 0;
	while (multiplier <= n)
	{
		multiplier = 0;
		product = n * multiplier;
		if (product <= 9)
		{
			_putchar(product + '0');
			multiplier++;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		else if (product > 9)
		{
			if (n > 15 || n < 0)
				continue;
		multiplier++;
		_putchar(product / 10 + '0');
		_putchar(product % 10 + '0');
		if (multiplier == n)
			break;
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
		else if (product > 99)
		{
			_putchar(product / 100 + '0');
			_putchar(product % 100 + '0');
			multiplier++;
			if (multiplier == n)
				break;
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		multiplier++;
	}
	_putchar('\n');
}
