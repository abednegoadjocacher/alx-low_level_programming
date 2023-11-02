#include <stdio.h>
/**
 * main - Natural numbers
 * Return: 0
 */
int main(void)
{
	int i, b = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	b += i;
	}
	i++
	}
	printf("%d\n", b);
	return (0);
}

