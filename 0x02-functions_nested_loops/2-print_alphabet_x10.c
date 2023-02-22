#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets in lowercase 10 times on
 * a newlines.
 *
 * Return: 0 always.
 */

void print_alphabet_x10(void)
{
	int i;
	int start, end;

	i = 0;
	while (i < 10)
	{
		start = 'a';
		end = 'z';

		while (start <= end)
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
		i++;
	}
}
