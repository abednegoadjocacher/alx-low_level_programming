#include"main.h"
/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: number of bits
 * @index: index to check bit
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divide, run;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	divide = 1 << index;
	run = n & divide;
	if (run == divide)
	return (1);
	return (0);
}
