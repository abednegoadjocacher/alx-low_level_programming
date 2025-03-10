#include"main.h"
/**
 * print_alphabet - A function that print alphabets
 * Print lowercase alphabets
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
