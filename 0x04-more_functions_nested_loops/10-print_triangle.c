#include "main.h"

/**
 */

void print_triangle(int size)
{
	int i,j,k;

	if (size <= 0)
		_putchar('\n');

	i = 0;
	while (i < size)
	{
		j = size - 1;
		while (j > i)
		{
			_putchar(' ');
			j--;
		}

		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}

		_putchar('\n');
		i++;
	}
}
