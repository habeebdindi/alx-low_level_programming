#include "main.h"

/**
 * int print_sign - function prints the arithmetic sign of a number
 * @n: The number whose sign is to be determined
 *
 * Return: Returns 1 and prints + if n is greater than zero,
 * returns 0 and prints 0 if n is zero and -1 and prints -
 * if n is less than zero
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
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	return (-1);
}
