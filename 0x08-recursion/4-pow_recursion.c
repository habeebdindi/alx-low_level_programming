#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number.
 * @y: power to be raised by x.
 *
 * Return: return -1 if y < 0, and returns the value of x to the
 * power of y otherwise.
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
