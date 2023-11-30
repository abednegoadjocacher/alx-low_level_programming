#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer
 * @array: Array
 * @size: Size of elements in the array
 * @cmp: A pointer to the functions
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}

