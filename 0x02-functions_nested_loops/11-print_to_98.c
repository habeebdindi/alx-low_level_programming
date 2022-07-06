#include "main.h"

/**
 * void print_to_98 - function prints, startin from n till it reaches 98
 * @n: starting point of the loop
 *
 * Return: Returns the printout of the function (ie n to 98)
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n >= 0 || n <= 0)
		{
		_putchar(n);
		n++;
		}
	}
}
