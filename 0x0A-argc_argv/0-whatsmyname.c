#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - To print its name
 * @argc: Arguments count
 * @argv: Arguments Vector
 * Return:  0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
