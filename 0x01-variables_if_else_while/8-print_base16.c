#include<stdio.h>
/**
 * main - Entry point
 * Print all numbers in base 16 in lowercase
 * Return:0
 */
int main(void)
{
	int numberz = 0;
	char c = 'a';

	while (numberz <= 9)
	{
		putchar(numberz + '0');
		numberz++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
