#include "main.h"
/**
 * _strcmp - Compares  string
 * @s1: First string
 * @s2: Second string
 * Return: If str1 < str2, the negative difference
 * if  str1 == str2, 0
 * If str1 > str2, the positive differenc
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
