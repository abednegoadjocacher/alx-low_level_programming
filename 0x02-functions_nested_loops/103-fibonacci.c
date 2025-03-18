#include<stdio.h>
/**
 * main - Entry point
 * Print the fibonacci sequence
 * Return: 0;
 */
int main(void)
{
	int start, count, sum, next;

	start = 1;
	sum = 2;
	printf("%d\n", sum);
	while (sum <= 4000000)
	{
		next = sum + start;
		start = sum;
		sum = next;
		if (next <= 4000000)
		{
			if (next % 2 == 0)
				printf("%d\n", next);
		}
		else
			break;
		count++;
	}
	return (0);
}

