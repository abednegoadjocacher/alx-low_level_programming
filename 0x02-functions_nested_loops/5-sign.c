#include "main.h"
/** print_sign(int n) - The sign of a number
 * @n: The number to be known
 * Return: 1 for positve, -1 for negatve or zero for nothing
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0);
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
