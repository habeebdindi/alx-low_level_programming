#include "main.h"


/**
* times_table - Prints the 9 times table, starting with 0.
*/

void times_table(void)
{
	int num; 
	int mult; 
	int prod;

	num = 0;
	while (num <= 9)
	{
		mult = 1;
		while (mult <= 9)
		{	_putchar(',');
			_putchar(' ');
			mult++;
		}
		_putchar('0');
		num++;
	}

	prod = num * mult;

	if (prod <= 9)
	_putchar(' ');

	else
	_putchar((prod / 10) + '0');


	_putchar((prod % 10) + '0');
	_putchar('\n');
}
