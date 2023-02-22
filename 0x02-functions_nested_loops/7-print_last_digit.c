#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @a: The number.
 *
 * Return: last digit of number.
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar(-(a % 10) + '0');
		return (-(a % 10));
	}
	else
		_putchar((a % 10) + '0');
	return ((a % 10));
}
