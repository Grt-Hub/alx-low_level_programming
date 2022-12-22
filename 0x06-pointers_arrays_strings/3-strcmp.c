#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return:	an int greater than  0 if s1 > s2,
 *		an int less than 0 if s1 < s2,
 *		0 if s1 is found equals to s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i])
	{
		if (s1[i] != s2[i])
		{
			j = ((s1[i] - '\0') - (s2[i] - '\0'));
			break;
		}
		i++;
	}

	return (j);
}
