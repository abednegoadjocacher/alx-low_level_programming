#include<stdio.h>
/**
 * main - Entry point
 * print numbers using putchar twice
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}

