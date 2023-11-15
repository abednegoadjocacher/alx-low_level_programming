#include "main.h"
#include <stdio.h>
int _prime(int a, int b);
/**
 * is_prime_number  - Prime number
 * @n: Number
 * Return: Number
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}
/**
 * _prime - Checkk  Prime
 * @a: Num 1
 * @b: Num 2
 * Return: 1 for prime or 0 for composite
 */
int _prime(int a, int b)
{
	if (a <= 1)
		return (0);
	if (a % b == 0 && b > 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (_prime(a, b  + 1));
}
