#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: character to ckeck (converted to ASCII code)
 * Return: 1 if c is a letter, 0 otherwise
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
