#include "main.h"
/**
 * find_sqrt_recursion - Find the natural square root of a number
 * @n: The number
 * @divisor: The current value of divisor
 * Return: The natural number or -1 if none exist
 */
int find_sqrt_recursion(int n, int divisor)
{
	if (divisor * divisor == n)
	{
		return (divisor);
	}
	if (divisor * divisor > n)
	{
		return (-1);
	}
	return (find_sqrt_recursion(n, divisor + 1));
}

/**
 * _sqrt_recursion - Print the natural square root of n
 * @n: The number to find the root of
 * Return: The result
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt_recursion(n, 1));
}
