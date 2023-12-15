#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - To set the value of a bit to 0 at a given index
 * @n: The number
 * @index: At index
 * Return: 1 if success, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	return (-1);
	*n &= ~(1 << index);
	return (1);
}
