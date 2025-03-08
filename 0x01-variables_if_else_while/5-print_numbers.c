#include<stdio.h>
/**
 * main - Entry point
 * Print all single number digits of base 10
 * Return:0
 */
int main(void)
{
	int single_digit = 0;

	while (single_digit < 10)
	{
		printf("%d", single_digit);
		single_digit++;
	}
	printf("\n");
	return (0);
}

