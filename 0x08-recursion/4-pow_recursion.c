#include "main.h"
/**
 * _pow_recursion - The power of number.
 * @x: The base number.
 * @y: The power.
 * Return: The result.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	x = x * _pow_recursion(x, y - 1);
	return (x);
}
