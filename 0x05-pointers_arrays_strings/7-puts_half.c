#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, n, half;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		half = len / 2;
		while (half < len + 1)
		{
			_putchar(str[half]);
			half++;
		}
	}
	else
	{
		n = (len - 1) / 2;
		while (n <= len + 1)
		{
			_putchar(str[n]);
			n++;
		}
	}
	_putchar('\n');
}
