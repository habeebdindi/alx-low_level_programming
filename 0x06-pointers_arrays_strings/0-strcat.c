#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: Pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *str = dest;

	while (*str)
		str++;
	while (*src)
		*str++ = *src++;
       	*str = '\0';
	return (dest);
}
