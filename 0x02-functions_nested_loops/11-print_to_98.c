#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print from an integer to 98 and a newline
 * afterwards.
 * @n: The number.
 *
 * Return: void.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
			printf("%d, ", n);
		n++;
	}
}
