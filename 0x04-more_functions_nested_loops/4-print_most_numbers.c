#include "main.h"

/**
 * print_most_numbers - prints the numbers 0-9 with the omission of 2 and 4
 *
 * Return: returns the result of the printed numbers
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
		_putchar(a + '0');
	}
	_putchar('\n');
}
