#include"main.h"
/**
 * _abs - Make number absolute
 * @n: Number of type int
 * Return: number
 */
int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	else if (n == 0)
		n = n * 1;
	else if (n > 0)
		n = n * 1;
	return (n);
}
