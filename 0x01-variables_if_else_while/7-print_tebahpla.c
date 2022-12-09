#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print the lowercase alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(10);

	return (0);
}
