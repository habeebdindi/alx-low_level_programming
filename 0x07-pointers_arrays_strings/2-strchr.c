#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: the string.
 * @c: the character.
 *
 * Return: pointer to the first occurrence of the character in the string or
 * NULL if no such byte is found.
 */

char *_strchr(char *s, char c)
{
	char *ptr;

	for (ptr = s; *ptr; ptr++)
		if (*ptr == c)
			return (ptr);
	if (*ptr == c)
		return (ptr);
	return (NULL);
}
