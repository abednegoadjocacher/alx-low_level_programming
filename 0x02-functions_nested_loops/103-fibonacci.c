#include<stdio.h>
/**
 * main - Entry point
 * Print the fibonacci sequence
 * Return: 0;
 */
int main(void)
{
	int start, sum, next;

	start = 1;
	sum = 2;
	printf("%d\n%d\n", start, sum);
	while (sum <= 4000000)
	{
		next = sum + start;
		start = sum;
		sum = next;
		if (next > 4000000)
			break;
		if (next % 2 == 0)
			printf("%d\n", next);
	}
	return (0);
}

