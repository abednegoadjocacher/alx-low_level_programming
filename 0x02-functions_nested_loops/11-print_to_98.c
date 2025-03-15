#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 */
void print_number(int n);
void print_to_98(int n)
{
	while (n != 98)
	{
		print_number(n);  /* Print number properly*/
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		else
			n--;
	}
		print_number(98);  /* Print 98 at the end*/
		_putchar('\n');
}
/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
		{
		_putchar('-');
		n = -n;
		}
		if (n / 10)
			print_number(n / 10);  /*Recursively print digits*/
		_putchar(n % 10 + '0');
}
