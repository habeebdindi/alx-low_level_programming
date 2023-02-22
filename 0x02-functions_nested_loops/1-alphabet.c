#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: 0 always
 */

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
