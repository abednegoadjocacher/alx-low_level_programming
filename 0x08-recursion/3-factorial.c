#include "main.h"
/**
 * factorial - Calculate the factorial of a number
 * @n: The number to find the factorial of.
 * Return: The result of the factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	n = n * factorial(n - 1);
	return (n);
}
