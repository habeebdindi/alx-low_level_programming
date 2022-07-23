#include "main.h"
/**
 * _sqrt_recursion - returns square roots of perfect squares.
 * @n: number whose square root is to be calculated.
 *
 * Return: the square root.
 */
int _sqrt_recursion(int n);
int no_loops(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (no_loops(n, 0));
}

/**
 * no_loops - solves for the natural square root of a number
 * @n: number whose square root is to be determined
 * @i: my recursive loop
 *
 * Return: returns the solution, the natural square root.
 */
int no_loops(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (no_loops(n, i + 1));
}
