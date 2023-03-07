#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the string
 *           haystack.
 * @haystack: the string.
 * @needle: the substring.
 *
 * Return: a pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	char *mtc;

	while (*haystack)
	{
		ptr = haystack;
		for (mtc = needle; *ptr && *mtc && (*ptr == *mtc); ptr++, mtc++)
			;
		if (*mtc == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
