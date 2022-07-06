#include "main.h"

/**
 * print_last_digit - prints the last digit of an input
 * @i: input 
 *
 * Return: returns i
 */

int print_last_digit(int i)
{
	if (c >= 0)
	{
	_putchar (c % 10);
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10);
	return (c % 10);
	}
}
