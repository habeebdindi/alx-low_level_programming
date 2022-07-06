#include "main.h"

/**
 * print_alphabet_x10 - prints the 26 alphabets in 10 lines.
 *
 * Return: function type is void, hence no return value
 */

void print_alphabet_x10(void)
{
	int n;
	int alph1;

	n = 1;
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
