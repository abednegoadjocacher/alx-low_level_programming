#include "main.h"
/**
 * binary_to_uint - A function to converts a binary number
 * @b: A pointer to a string
 *
 * Return:The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int number;

	number = 0;
	if (!b)
	return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
	if (b[a] != '0' && b[a] != '1')
	return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
	number <<= 1;
	if (b[a] == '1')
	number += 1;
	}
	return (number);
}
