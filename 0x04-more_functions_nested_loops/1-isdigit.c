#include "main.h"

/**
 * _isdigit - checks if a character is a digit character
 * @c: the character to be checked
 *
 * Return: returns 1 if character is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
