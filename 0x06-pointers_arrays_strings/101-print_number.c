#include "main.h"
/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor = 1;
	int temp = n;
	int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		temp = n;
	}
	while (temp >= 10)
	{
		temp /= 10;
		divisor *= 10;
	}
	while (divisor >= 1)
	{
		digit = n / divisor;
		_putchar(digit + '0');
		n %= divisor;
		divisor /= 10;
	}
}
