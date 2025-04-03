#include"main.h"
/**
 * print_line - Print the shorters distance
 * @n: The length of line
 * Return: nothing
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while(n > 0)
		{
			_putchar('_');
			n--;
		}
		_putchar('\n');
	}
}
