#include "main.h"

/**
 * _strncat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n: number of bytes to be copied from n.
 *
 * Return: A pointer to the string.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *str = dest;

	while (*str)
		str++;
	while (*src && n--)
		*str++ = *src++;
	*str = '\0';
	return (dest);
}
