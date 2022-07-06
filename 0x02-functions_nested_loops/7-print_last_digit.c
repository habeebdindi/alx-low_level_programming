#include "main.h"

/**
 * print_last_digit - prints the last digit of an input
 * @i: input 
 *
 * Return: returns i
 */

int print_last_digit(int i)
{
	if (i >= 0)
	{
	_putchar (i % 10);
	return (i % 10);
	}
	else
	{
	i = i * -1;
	_putchar (i % 10);
	return (i % 10);
	}
}
