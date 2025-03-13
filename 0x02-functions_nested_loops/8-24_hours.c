#include"main.h"
/**
 * jack_bauer - I have a long day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int first_hr, second_hr, mins, sec;

	first_hr = second_hr = mins = sec = 0;
	while (first_hr <= 2)
	{
		if (first_hr != 2)
		{
			second_hr = 0;
			while (second_hr <= 9)
			{
				mins = 0;
				while (mins <= 5)
				{
					sec = 0;
					while (sec <= 9)
					{
						_putchar(first_hr + '0');
						_putchar(second_hr + '0');
						_putchar(':');
						_putchar(mins + '0');
						_putchar(sec + '0');
						sec++;
						_putchar('\n');
					}
				}
				mins++;
			}
			second_hr++;
		}
			else
			{
				 second_hr = 0;
	while (second_hr <= 3)
	{
	mins = 0;
	while (mins <= 5)
	{
	sec = 0;
	while (sec <= 9)
	{
	_putchar(first_hr + '0');
	_putchar(second_hr + '0');
	_putchar(':');
	_putchar(mins + '0');
	_putchar(sec + '0');
	sec++;
	_putchar('\n');
	}
	mins++;
	}
	second_hr++;
			}
			}
			first_hr++;
		}
}
