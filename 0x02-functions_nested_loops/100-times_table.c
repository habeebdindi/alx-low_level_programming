#include "main.h"

/**
 * print_comma_space - Prints a comma and a number of whitespaces.
 * @n: The number of whitespaces to print.
 *
 * Return: void.
 */

void print_comma_space(int n)
{
	int i;

	if (n <= 0)
		return;

	_putchar(',');

	i = 0;
	while (i < n)
	{
		_putchar(' ');
		i++;
	}
}


/**
 * print_space - Prints a number of whitespaces.
 * @n: The number of whitespaces to print.
 *
 * Return: void.
 */

void print_space(int n)
{
	int i;

	if (n <= 0)
		return;

	i = 0;
	while (i < n)
	{
		_putchar(' ');
		i++;
	}
}


/**
 * print_3_digits - Prints 3-digit number using _putchar.
 * @n: The 3-digit number.
 *
 * Return: void.
 */

void print_3_digits(int n)
{
	if (n < 100 || n > 999)
		return;

	_putchar('0' + (n / 100));
	_putchar('0' + (n % 100) / 10);
	_putchar('0' + (n % 100) % 10);
}


/**
 * print_2_digits - Prints 2-digit number using _putchar.
 * @n: The 2-digit number.
 *
 * Return: void.
 */

void print_2_digits(int n)
{
	_putchar((n / 10) + '0');
	_putchar((n % 10) + '0');
}

/**
 * print_times_table - Prints the mutiplication table from 0 through a number.
 * @n: The number.
 *
 * Return: void.
 */

void print_times_table(int n)
{
	int i, j, num;

	if (n < 0 || n > 15)
		return;
	i = 0;
	while (i <= n)
	{
		_putchar('0');
		if (i < 10 && n > 0)
			print_comma_space(3);
		else
			if (n > 0)
				print_comma_space(2);
		num = i;
		j = 0;
		while (j < n)
		{
			if (num <= 9)
				_putchar(num + '0');
			else if (num > 9 && num < 100)
				print_2_digits(num);
			else
				print_3_digits(num);
			if (j != n - 1)
			{
				print_comma_space(1);
				if (num + i < 10)
					print_space(2);
				else if (num + i > 9 && num + i < 100)
					print_space(1);
			}
			num += i;
			j++;
		}
		_putchar('\n');
		i++;
	}
}
