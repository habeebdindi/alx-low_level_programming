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
			{
				_putchar(num + '0');
				if (j != 8)
				{
					_putchar(',');
					_putchar(' ');
					if (num + i < 10)
						_putchar(' ');
				}
			}
			else if (num > 9)
			{
				_putchar((num / 10) + '0');
				_putchar((num % 10) + '0');
				if (j != 8)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			num += i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
