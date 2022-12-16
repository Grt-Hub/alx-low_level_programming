#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: number of times the character '\' should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			j = 0;
			while (j < i)
			{
				_putchar(32);
				j++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
