#include<stdio.h>
/**
 * main - Entry point
 * Print numbers separated by commas
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');
		if (number == 9)
			break;
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');
	return (0);
}

