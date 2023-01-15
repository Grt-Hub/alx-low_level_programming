#include "main.h"

/**
 * _memset - fills memmory with a constant byte
 * @s: pointer to the memory area
 * @b: constant byte that will fill the memory area @s
 * @n: number of bytes of the memory area @s to be filled by @b
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
