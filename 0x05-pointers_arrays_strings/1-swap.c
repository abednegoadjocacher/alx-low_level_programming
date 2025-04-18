#include"main.h"

/**
 * swap_int - Swap the values of variables
 * @a: the pointer to first number
 * @b: the pointer to second number
 * Return: nothing
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

