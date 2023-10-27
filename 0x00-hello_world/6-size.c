#include <stdio.h>
/**
 * main - Knowing the size of data types
 * Return: 0 (Success)
 */
int main(void)
{
char c;
int n;
long int b;
long  long int a;
float f;
	printf("Size of a 'char': %lu byte(s)\n", sizeof(c));
	pirntf("Size of an 'int': %lu byte(s)\n", sizeof(n));
	pirntf("Size of a 'long int': %lu byte(s)\n", sizeof(b));
	pirntf("Size of a long long 'int': %lu byte(s)\n", sizeof(a));
	pirntf("Size of a 'float': %lu byte(s)\n", sizeof(f));
	return (0);
}
