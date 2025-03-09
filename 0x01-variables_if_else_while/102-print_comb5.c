#include<stdio.h>
/**
 * main - Entry point
 * Print all possible combination two two-digits
 * Return: 0
 */
int main(void)
{
	int out, inner;

	out = inner = 0;
	while (out <= 98)
	{
		inner = out + 1;
		while (inner <= 99)
		{
			putchar((out / 10) + '0');
			putchar((out % 10) + '0');
			putchar(' ');
			putchar((inner / 10) + '0');
			putchar((inner % 10) + '0');
			inner++;
			if (out == 98)
				break;
			putchar(',');
			putchar(' ');
		}
		out++;
	}
	putchar('\n');
	return (0);
}

