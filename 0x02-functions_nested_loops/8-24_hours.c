#include"main.h"
/**
 * jack_bauer - I have a long day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int hour, minutes;

	hour = minutes = 0;
	while (hour <= 23)
	{
		minutes = 0;
		while (minutes <= 59)
		{
			_putchar(hour / 10 + '0');
			_putchar(hour % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
			minutes++;
		}
		hour++;
	}
}
