#include "main.h"

/**
 * jack_bauer - print every minute of the day of Jack Bauer :-)
 *
 * Return: Nothing
 */

void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;
	while (i <= 2)
	{
		j = 0;

		while (j <= 9)
		{
			k = 0;

			if (i == 2 && j == 4)
				break;


			while (k <= 5)
			{
				l = 0;

				while (l < 10)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
