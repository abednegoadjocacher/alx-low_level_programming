#include "main.h"
/**
 * infinite_add -  adds two numbers.
 * @n1: First number
 * @n2: Second number
 * @r: Pointer to buffer
 * @size_r: Buffer size
 * Return: Pointer to  the  calling function
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, i = 0, j = 0, d = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
	i++;
	while (*(n2 + j) != '\0')
	j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
	return (0);
	while (j >= 0 || i >= 0 || a == 1)
	{
	if (i < 0)
	val1 = 0;
	else
	val1 = *(n1  + i) - '0';
	if (j < 0)
	val2 = 0;
	else
	val2 = *(n2 + j) - '0';
	temp_tot = val1 + val2 + a;
	if (temp_tot >= 10)
	a = 1;
	else
	a = 0;
	if (d >= (size_r - 1))
	return (0);
	*(r + d) = (temp_tot % 10) + '0';
	d++;
	j--;
	i--;
	}
	if (d == size_r)
	return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}