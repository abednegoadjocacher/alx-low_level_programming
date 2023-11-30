#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function that executes a function given as a parameter
 * @array: Array
 * @size: Size of array
 * @action:A pointer printing in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
