#include<stdio.h>
/**
 * main - Entry point
 * Print alphabet in lowe case
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
	putchar(alpha);
	alpha++;
	}
	putchar('\n');
	return (0);
}
