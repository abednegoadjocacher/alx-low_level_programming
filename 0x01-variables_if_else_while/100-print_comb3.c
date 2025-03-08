#include<stdio.h>
/**
 * main - Entry point
 * Print double numbers without repeating same numbers
 * Return: 0
 */
int main(void)
{
	int out_number, in_number;

	out_number = in_number = 0;
	while (out_number <= 8)
	{
		in_number = out_number + 1;
		while (in_number <= 9)
		{
			if (out_number == in_number)
			{
				in_number++;
				continue;
			}
			putchar(out_number + '0');
			putchar(in_number + '0');
			in_number++;
			putchar(',');
			putchar(' ');
		}
	out_number++;
	}
	putchar('\n');
	return (0);
}
