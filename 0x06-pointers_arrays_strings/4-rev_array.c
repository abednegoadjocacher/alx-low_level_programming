#include "main.h"

/**
 * reverse_array  - Print array in reverse order
 * @a: A pointer to array
 * @n: The number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start, end, tmp;

	start = end = tmp = 0;

	while (end < n - 1)
	{
		end++;
	}
	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}

}
