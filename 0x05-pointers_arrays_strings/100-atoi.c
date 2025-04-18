#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: Pointer to the string
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign, i;
	int number_started, result;

	sign = 1;
	i = result = number_started = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-' && !number_started)
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			number_started = 1;
			result = result * 10 + (s[i] - '0');
		}
		else if (number_started)
			break;
		i++;
	}
	return (sign * result);
}
