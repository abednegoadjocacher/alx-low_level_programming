#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Exceptional alphabets
 * Return: 0
 */
int main(void)
{
	char c, a, b;

	a = 'q';
	b = 'e';
	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != a && c != b)
	putchar(c);
	}
	putchar('\n');
	return (0);
}

