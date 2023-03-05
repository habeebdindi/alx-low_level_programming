#include "main.h"
#include <limits.h>

/**
 * pr_uint - Prints unsinged integer using _putchar.
 * @n: Integer to be printed.
 *
 * Return: void
 */

void pr_uint(unsigned int n)
{
	if (n / 10 != 0)
		pr_uint(n / 10);
	_putchar((n % 10) + 48);
}


/**
 * print_number - Prints integer using _putchar.
 * @n: Integer to be printed.
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	pr_uint((unsigned int) n);
}
