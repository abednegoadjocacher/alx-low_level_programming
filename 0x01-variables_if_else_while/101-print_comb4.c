#include<stdio.h>
/**
 * main - Entry point
 * Print more numbers without repeation
 * Return: 0
 */
int main(void)
{
	int out, in, innermost;

	out = in = innermost = 0;
	while (out <= 7)
	{
		in = out + 1;
		while (in <= 8)
		{
			innermost = in + 1;
			while (innermost <= 9)
			{
				putchar(out + '0');
				putchar(in + '0');
				putchar(innermost + '0');
				innermost++;
				if (out == 7)
					break;
				putchar(',');
				putchar(' ');
			}
			in++;
		}
		out++;
	}
	putchar('\n');
	return (0);
}

