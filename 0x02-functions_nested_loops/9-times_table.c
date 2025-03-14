#include"main.h"
/**
 * times_table - Print 9 times table
 * Return: void
 */
void times_table(void)
{
	int number, times, product;

	number = times = product = 0;
	while (number <= 9)
	{
		times = 0;
		while (times <= 9)
		{
			product = number * times;
			if (product <= 9)
			{
				_putchar(product + '0');
				times++;
				if (times <= 9)
				{
				_putchar(',');
				_putchar(' '); 
				_putchar(' ');
				}
			}
			else if (product > 9)
			{
			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			times++;
			if (times <= 9)
			{
			_putchar(',');
			_putchar(' ');
			}
			}
		}
		_putchar('\n');
		number++;
	}
}
