#include "main.h"
/**
 * _powerof - Calculating the (base ^ power)
 * @base: Base exponent
 * @power: The power of exponent
 * Return: The value of (base ^ power)
 */
unsigned long int _powerof(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int a;

	number = 1;
	for (a = 1; a <= power; a++)
	number *= base;
	return (number);
}

/**
 * print_binary - To print a number in binary form
 * @n: The number of print
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divide, _check;
	char run;

	run = 0;
	divide = _powerof(2, sizeof(unsigned long int) * 8 - 1);
	while (divide != 0)
	{
	_check = n & divide;
	if (_check == divide)
	{
	run = 1;
	_putchar('1');
	}
	else if (run == 1 || divide == 1)
	{
	_putchar('0');
	}
	divide >>= 1;
	}
}
