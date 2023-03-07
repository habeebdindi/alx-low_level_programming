#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string.
 * @accept: pointer to string to match from.
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	for (; *s; s++)
		for (ptr = accept; *ptr; ptr++)
			if (*ptr == *s)
				return (s);
	return (NULL);
}
