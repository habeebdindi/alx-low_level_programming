#include "main.h"

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character.
 *
 * Return: 0 if it's not uppercase and 1 if it is.
 */

int _isupper(int c)
{
	char start;

	start = 'A';
	while (start <= 'Z')
	{
		if (c == start)
			return (1);
		start++;
	}

	return (0);
}
