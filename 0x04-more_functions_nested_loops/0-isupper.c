#include "main.h"

/**
 * _isupper - checks if letters are in UPPERCASE
 * @c: the character whose case is to be checked
 *
 * Return: returns 1 if character is in uppercase
 * and returns 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
