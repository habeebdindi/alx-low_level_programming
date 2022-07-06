#include "main.h"

/**
 * print_alphabet - prints out alphabets a to z
 *
 * Return: return the letters a-z
 */
void print_alphabet(void)
	{
		int alph1;

		for (alph1 = 'a'; alph1 <= 'z'; alph1++)
		{
			_putchar(alph1);
		}
		_putchar('\n');
	}
