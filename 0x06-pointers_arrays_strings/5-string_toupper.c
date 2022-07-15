#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string
 * to uppercase
 * @s: string to modify
 *
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int upp;

	for (upp = 0; s[upp] != '\0'; upp++)
	{
		if (s[upp] >= 'a' && s[upp] <= 'z')
			s[upp] = s[upp] - 32;
	}

	return (s);
}
