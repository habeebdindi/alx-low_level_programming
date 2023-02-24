#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 0)
 * @c: The digit to be checked for
 *
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	char start = '0';

	while (start <= '9')
	{
		if (c == start)
			return (1);
		start++;
	}
	return (0);
}
