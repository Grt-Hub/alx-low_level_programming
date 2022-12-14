#include "main.h"

/**
 * print_alphabet_x10 - function that prints the lowercase alphabet 10 times
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	int i;
	int j = 0;

	while (j < 10)
	{
		i = 97;
		while (i < 123)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
