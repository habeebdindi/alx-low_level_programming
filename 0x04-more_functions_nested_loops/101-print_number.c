#include "main.h"
#include <limits.h>

/**
 * print_number - Prints integer using _putchar.
 * @n: Integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{
	int preceding, last_digit;

	preceding = n / 10;

	if (preceding)
		print_number(preceding);

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
		_putchar(last_digit + 48);
	}
	else
		_putchar((last_digit) + 48);
}
