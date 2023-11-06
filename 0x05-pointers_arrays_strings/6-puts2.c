#include "main.h"
/**
 * puts2 - Print every character
 * @str: The string character
 */
void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	j++;
	}
	for (i = 0; i < j; i += 2)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}
