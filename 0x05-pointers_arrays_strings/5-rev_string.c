#include "main.h"
#include <stdio.h>

/**
 * rev_string - function that reverse a string
 * @s: a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0, j, k;
	char first, last;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	k = j / 2;
	while (k >= 0)
	{
		first = s[j - k];
		last = s[k];
		s[k] = first;
		s[j - k] = last;
		k--;
	}
}
