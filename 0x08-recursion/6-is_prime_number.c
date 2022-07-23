#include "main.h"
/**
 * is_prime_number - checks if a number is a prime number
 * @n: number to be checked
 *
 * Return: returns 1 if n is a prime number and 0 otherwise
 */

int is_prime_number(int n);
int sol(int n, int x);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (sol(n, n - 1));
}

/**
 * sol - solution, calculates prime number
 * @n: number to be checked
 * @x: loop variable
 *
 * Return: returns 1 if n is a prime number amd 0 otherwise
 */
int sol(int n, int x)
{
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0 && x > 0)
	{
		return (0);
	}
	return (sol(n, x - 1));
}
