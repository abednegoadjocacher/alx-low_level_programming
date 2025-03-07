#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - Entry point
 * Print the last digit
 * Return: 0
 */

int main(void)
{
	int n, _digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	_digit = n % 10;
	if (_digit > 5)
	printf("Last digit of %d is and %d is greater than 5\n", n, _digit);
	else if (_digit == 0)
	printf("Last digit of %d is %d and is zero 0\n", n, _digit);
	else
	printf("Last digit of %d is and %d is less than 6 and not 0\n", n, _digit);
	return (0);
}
