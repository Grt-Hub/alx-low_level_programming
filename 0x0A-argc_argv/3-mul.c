#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 in case of success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	/* We use the 'atoi' function from 'stdlib.h' */
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
