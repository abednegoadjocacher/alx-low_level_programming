#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Mixed capital and lowercase letters
 * Return: 0
 */
int main(void)
{
	char t;

	for (t = 'a'; t <= 'z'; t++)
	putchar(t);
	for (t = 'A'; t <= 'Z'; t++)
	putchar(t);
	putchar('\n');

	return (0);
}
