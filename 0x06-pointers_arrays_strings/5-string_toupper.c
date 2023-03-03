#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *string_toupper(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if (*ptr >= 97 && *ptr <= 122)
			*ptr = *ptr - 32;
		ptr++;
	}
	return (s);
}
