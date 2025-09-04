#include "main.h"

/**
 * print_number - Function that prints an integer
 * @n: The number that is to be printed
 * Return: Void
 */

void print_number(int n)
{
	int temp = n;
	int num_digits = 0;
	int divisor = 1;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp != 0)
	{
		temp /= 10;
		num_digits++;
	}

	for (i = 1; i < num_digits; i++)
	{
		divisor *= 10;
	}

	if (n < 0)
	{
		_putchar('-');
	}
	while (divisor > 0)
	{
		int digit = n / divisor;

		if (digit < 0)
		{
			digit *= -1;
		}

		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
