#include "main.h"

/**
 * cap_string - Capitalises all words in a string.
 * @s: The string.
 *
 * Return: A pointer to the string.
 */

char *cap_string(char *s)
{
	char *ptr = s;
	char sep[] = " \t\n,;.!?\"(){}";
	char *sepp;

	if (*s > 96 && *s < 123)
		*s -= 32;
	while (*s)
	{
		for (sepp = sep; *sepp; sepp++)
			if (*s == *sepp)
				if (*(s + 1) > 96 && *(s + 1) < 123)
					*(s + 1) -= 32;
		s++;
	}
	return (ptr);
}
