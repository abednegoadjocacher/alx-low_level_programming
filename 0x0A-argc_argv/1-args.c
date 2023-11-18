#include "main.h"
#include <stdio.h>
/**
 * main - Number of arguments
 * @argc: Argument Counts
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) *argv;
	printf("%d\n", argc - 1);
	return (0);
}
