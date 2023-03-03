#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *leet(char *s)
{
	char *ret = s;
	char leet[] = "43071";
	char capt[] = "AEOTL";
	char *ptr, *ptr2;

	while (*s)
	{
		for (ptr = capt, ptr2 = leet; *ptr; ptr++, ptr2++)
			if (*s == *ptr || *s == *ptr + 32)
				*s = *ptr2;
		s++;
	}
	return (ret);
}
