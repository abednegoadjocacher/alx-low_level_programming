#include "main.h"

/**
 * print_number:A function that print numbers
 * @: A number
 * Return void
 */

void print_number(int n)
{
	int temp, r;
	int v, _n;
	int reminder, m;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else if(n >= 10 && n <= 99)
	{
		v = n / 10;
		reminder = n % 10;
		_putchar(v + '0');
	       _putchar(reminder + '0');
	}
	else if (n >= 100 && n <= 999)
	{
		v = n / 100;
		reminder = n % 100;
		r = reminder / 10;
		temp = reminder % 10;
		_putchar(v + '0');
		_putchar(r + '0');
	       _putchar(temp + '0');
	}
	else if (n >= 1000 && n <= 9999)
	{
		v = n / 1000;
		reminder = n % 1000;
		r  = reminder / 100;
		temp = reminder % 100;
		_n = temp / 10;
		m = temp % 10;
		_putchar(v + '0');
		_putchar(r + '0');
		_putchar(_n + '0');
		_putchar(m + '0');
	}
}
