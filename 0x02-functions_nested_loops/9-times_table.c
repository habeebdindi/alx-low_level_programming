#include "main.h"

/**
 * times_table - Prints the mutiplication table from 0 through 9.
 *
 * Return: void.
 */

void times_table(void)
{
	int i, j, num;

	i = 0;
	while (i < 10)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		_putchar(' ');

		num = i;
		j = 0;
		while (j < 9)
		{
			if (num <= 9)
				_putchar(num + '0');
			else if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
			}
			if (num == 0 && j != 8)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			if (num != i * 9)
			{
				_putchar(',');
				_putchar(' ');
				if (num <= 9)
					_putchar(' ');
			}
			num += i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
