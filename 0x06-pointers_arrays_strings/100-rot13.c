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
	char hf[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char he[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";
	char *ptr, *ptr1;

	while (*s)
	{
		for (ptr = hf, ptr1 = he; *ptr; ptr++, ptr1++)
			if (((*s > 64 && *s < 91) || (*s > 96 && *s < 123)) && *s == *ptr)
			{
				*s = *ptr1;
				break;
			}
		s++;
	}
	return (ret);
}
