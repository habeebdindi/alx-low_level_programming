#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 * @n: the number.
 * Return: natural square root of the number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}


/**
 * _sqrt_help - uses recursion to get square root.
 * @n: the number
 * @try: comparison variable.
 * Return: the square root if it's natural, else -1.
 */

int _sqrt_help(int n, int try)
{
	if (try == (n / 2) + 1 && n != 1)
		return (-1);
	if (try * try == n)
		return (try);
	try++;
	return (_sqrt_help(n, try));
}
