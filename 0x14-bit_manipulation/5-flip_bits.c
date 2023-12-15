#include "main.h"
/**
 * flip_bits - counts the number of bits to be change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result)
	{
	count += result & 1;
	result >>= 1;
	}
	return (count);
}
