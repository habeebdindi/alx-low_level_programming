#include "main.h"
#include <stdio.h>

/**
 * _abs - Calculates the absolute value of an integer.
 * @a: The integer.
 *
 * Return: a if a is greater than zero and -a if a is negative.
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
