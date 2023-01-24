#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to the start of matrix
 * @sz: width of matrix column
 *
 * Return: void
 */

void print_diagsums(int *a, int sz)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < sz; i++)
	{
		p = (i * sz) + i;
		l += *(a + p);
	}

	for (j = 0; j < sz; j++)
	{
		p = (j * sz) + (sz - 1 - j);
		r += *(a + p);
	}

	printf("%i, %i\n", l, r);
}
