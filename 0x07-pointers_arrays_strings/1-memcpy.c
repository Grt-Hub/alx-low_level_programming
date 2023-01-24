#include "main.h"

/**
 * _memcpy - copies memory area
 * @n: bytes to copy from @src to @dest
 * @src: source memory area
 * @dest: destination memory area
 *
 * Return: pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
