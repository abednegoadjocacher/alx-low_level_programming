#include<stdio.h>
/**
 * main - Entrying point
 * Print number from 1 to 100
 * Check if number is divisible by 3, 5 or both
 * If number is divisible by 3 print Fizz
 * Else if number divisible by 5 print Buzz
 * Else if both divides print FizzBuzz
 * Return: 0;
 */
int main(void)
{
	int number = 1;

	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz ");
		else if (number % 5 == 0)
			printf("Buzz ");
		else if (number % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", number);
		number++;
	}
	printf("\n");
	return (0);
}
