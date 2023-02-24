#include "main.h"

/**
 * print_number - Prints the numbers from 0-9 followed by a newline
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');
}
