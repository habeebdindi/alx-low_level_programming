#include "main.h"

/**
 * _isalpha - Checks whether a character is an alphabet, regardless of its case
 * @c: is the character
 *
 * Return: returns 1 if character is an alphabet, otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'Z')
	{
		return  (1);
	}
	else
		return (0);
}
