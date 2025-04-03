#include"main.h"
/**
 * more_numbers - Print more nummber to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int b = 1;

	while (b <= 10)
	{
		char c = 0;

		while (c <= 14)
		{
			if (c > 9)
				_putchar('1');
			_putchar(c % 10 + '0');
			c++;
		}
		_putchar('\n');
		b++;
	}
}
