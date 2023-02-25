#include "main.h"

/**
 * print_number - Prints integer using _putchar.
 * @n: Integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{
	int preceding;

	preceding = n / 10;
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}

	if (preceding)
		print_number(n / 10);

	_putchar((n % 10) + 48);
}
