#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 *
 * Return: void.
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	i = 0;
	while (i < n)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
