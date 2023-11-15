#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: Pointer
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if  (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare - Compare characters
 * @s: String
 * @n1: Num1
 * @n2: Num2
 * Return: Num
 */
int compare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
	if (n1 == n2 || n1 == n2 + 1)
		return (1);
	return (0 + compare(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, _strlen_recursion(s) - 1));
}
