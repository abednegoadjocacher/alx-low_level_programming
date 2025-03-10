#include"main.h"
/**
 * print_alphabet_x10 - Print alphabets repeatedly 10x
 * Print alphabets for ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int count = 1;

	while (count <= 10)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
