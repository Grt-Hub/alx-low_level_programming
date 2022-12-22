#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string (src string will be appended to it)
 * @src: source string (will be appended to dest)
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest, and then
 * adds a terminating null byte
 *
 * Return: a pointer to the resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}
