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
	int last_digit = 0;

	if (n < 0)
		_putchar('-');

	if (n / 10)
		print_number(n / 10);

	last_digit = n % 10;
	_putchar(last_digit + 48);
}
