#include <stdio.h>

/**
 * main - main function
 *
 * Description: prints all possible combination of two two-digit numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k, l;

	i = 48;

	while (i < 58)
	{
		j = 48;
		while (j < 58)
		{
			k = i;
			l = j + 1;
			while (k < 58)
			{
				while (l < 58)
				{
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i < 57 || j < 56 || k < 57 || l < 57)
					{
						putchar(44);
						putchar(32);
					}
					l++;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar(10);

	return (0);
}
