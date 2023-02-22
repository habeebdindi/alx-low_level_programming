#include "main.h"

/**
 * print_sign - Checks the sign of a number and prints it out.
 * @n: The number.
 *
 * Return: 1 if n is greater than 0, returns 0 if n is 0 and
 * returns -1 id n is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(n);
		return (0);
	}
	else
	{
		_putchar('-');
	}
	return (-1);
}
