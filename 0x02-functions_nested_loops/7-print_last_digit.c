#include"main.h"
/**
 * print_last_digit - The last of number
 * To print the last digit of number
 * @n: The number
 * Return: The last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
		n = n % 10;
		_putchar(n + '0');
	}
	else
	{
		n = n % 10;
		_putchar(n + '0');
	}
	return (n);
}
