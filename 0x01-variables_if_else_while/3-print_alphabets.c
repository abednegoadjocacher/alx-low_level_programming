#include<stdio.h>
/**
 * main - Entry point
 * Print both lower and uppercase letters
 * Return: 0
 */
int main(void)
{
        char lower_case = 'a';
        char upper_case = 'A';

        while (lower_case <= 'z')
	{
		putchar(lower_case);
		lower_case++;
	}
	while (upper_case <= 'Z')
	{
		putchar(upper_case);
		upper_case++;
	}
	putchar('\n');
        return (0);
}
