#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: Pointer
 * @size: Size
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
		sum1 = sum1 + a[i * size + i];
	for (n = size - 1; n >= 0; n--)
		sum2 += a[n * size + (size - n - 1)];
	printf("%d, %d\n", sum1, sum2);
}
