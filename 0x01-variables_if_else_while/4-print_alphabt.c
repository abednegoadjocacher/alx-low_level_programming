#include<stdio.h>
/**
 * main -Entry point
 * Print alphabet except q and e
 * Return: 0
 */
int main(void)
{
	char lower_case = 'a';

	while (lower_case <= 'z')
	{
	if (lower_case == 'e' || lower_case == 'q')
	{
		lower_case++;
		continue;
	}
	putchar(lower_case);
	lower_case++;
	}
	putchar('\n');
	return (0);
}

