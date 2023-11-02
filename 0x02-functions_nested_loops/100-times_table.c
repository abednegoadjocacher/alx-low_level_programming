#include "main.h"
/**
 * print_times_table - 100 Time table
 * Starting with 0.
 * @n: Number of times
 */
void print_times_table(int n)
{
	int num, sat, run;

	if (n >= 0 && n <= 15)
	{
	for (num = 0; num <= n; num++)
	{
	_putchar('0');
	for (sat = 1; sat <= n; sat++)
	_putchar(',');
	_putchar(' ');
	run = num * sat;
	if (run <= 99)
	_putchar(' ');
	if (run <= 9)
	_putchar(' ');
	if (run >= 100)
	{
	_putchar((run / 100) + '0');
	_putchar((run / 10) % 10 + '0');
	}
	else if (run <= 99 && run >= 10)
	{
	_putchar((run / 10) + '0');
	}
	_putchar((run % 10) + '0');
	}
	_putchar('\n');
	}
}
