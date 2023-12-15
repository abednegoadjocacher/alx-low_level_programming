#include "main.h"
/**
 * set_bit - To sets the value of a bit to 1 at a given index.
 * @n: number of bits set
 * @index: index of the set bit
 * Return: 1 if success, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set_bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	set_bit = 1 << index;
	*n = *n | set_bit;
	return (1);
}
