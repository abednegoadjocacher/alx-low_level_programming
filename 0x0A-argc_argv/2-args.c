#include "main.h"
#include <stdio.h>
/**
 * main - Prints arguments
 * @argc: Argument Counts
 * @argv: Argument Vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
