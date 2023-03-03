#include "main.h"

/**
 * _strncpy - Copies a string.
 * @dest: Destination string.
 * @src: Source to be copied from.
 * @n: Number of bytes to opy from src.
 *
 * Return: A pointer to the string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *str = dest;

	while (n-- && (*str++ = *src++))
		;
	if (n > 0)
		for (; n--; *str++ = '\0')
			;
	return (dest);
}
