#include "main.h"

/**
 * times_table - print the 9 times table, starting with 0
 *
 * Return: Nothing
 */

void times_table(void)
{
	int line, column, product, tens, ones;

	for (line = 0 ; line <= 9 ; line++)
	{
		for (column = 0 ; column <= 9 ; column++)
		{
			product = line * column;
			tens = product / 10;
			ones = product % 10;

			if (column == 0)
			{
				_putchar('0');
			}
			else if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
