#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *rot13(char *s)
{
	char *ret = s;
	char half1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMm";
	char half2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZz";
	char *ptr, *ptr1;

	while (*s)
	{
		for (ptr = half1, ptr1 = half2; *ptr && *ptr1; ptr++, ptr1++)
		{
	       		if (*s == *ptr)
    	       			*s = *ptr1;
	       		else if (*s == *ptr1)
	       			*s = *ptr;
		}
		s++;
	}
	return (ret);
}
