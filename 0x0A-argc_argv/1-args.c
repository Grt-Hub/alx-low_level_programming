#include "main.h"
#include <stdio.h>

/**
 * main - Prints the arguments passed into the program
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
