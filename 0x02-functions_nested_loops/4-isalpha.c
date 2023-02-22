#include "main.h"

/**
 * _isalpha - Checks alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if letter is in lowercase and 0 otherwise.
 */

int _isalpha(int c)
{
	int start = 65;
	int end = 122;

	while (start <= end)
	{
		if (start == 91)
			start = start + 4;
		else if (start == c)
			return (1);
		start++;
	}
	return (0);
}
