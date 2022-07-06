#include "main.h"

/**
 * main - entry point, calls other functions from header file.
 *
 * Return: Return 0 always
 */

void print_alphabet_x10(void)
{
	int n;
	int alph1;

	n = 0;
	while (n < 11)
	{
		alph1 = 'a';
		while (alph1 <= 'z')
		{
			_putchar(alph1);
			alph1++;
		}
		_putchar('\n');
		n++;
	}
}
