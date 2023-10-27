#include <stdio.h>
/**
 * main - Knowing the size of data types
 * Return: 0
 */
int main(void)
{
char;
int;
long int;
long long int;
float;
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	pirntf("Size of an int: %lu byte(s)\n", sizeof(int));
	pirntf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	pirntf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	pirntf("Size of a float : %lu byte(s)\n", sizeof(float));
	return (0);
}
