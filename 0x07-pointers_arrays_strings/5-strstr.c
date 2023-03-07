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
	int len = 0;
	int rec = 0;
	int check = 0;

	mtc = needle;
	while (*mtc)
	{
		mtc++;
		len++;
	}
	ptr = haystack;
	while (*ptr)
	{
		check = rec;
		for (mtc = needle; *mtc != '\0'; mtc++)
			if (*ptr == *mtc)
				rec++;
		if (check == rec)
			rec = 0;
		else if (rec == len)
		{
			ptr -= len - 1;
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
