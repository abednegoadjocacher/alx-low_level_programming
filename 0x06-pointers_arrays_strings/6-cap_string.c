#include "main.h"

/**
 * cap_string - the funnction capitalize
 * @s: the pointer to string
 *
 * Return string
 */

char *cap_string(char *s)
{
	int i = 0;
	int flag = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '.' || s[i] == ',' || s[i] == '"' || s[i] == '?' || s[i] == '!' || s[i] == ';' || s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}' || s[i] == '\n')
		{
			flag = 1;
		}
		else if  (flag && s[i] >= 97 && s[i] <= 122)
		{
			flag = 0;
			s[i] -= 32;
		}
		else
		{
			flag = 0;
		}
	i++;
	}
	return (s);
}
