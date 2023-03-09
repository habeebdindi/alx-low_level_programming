#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to be checked.
 *
 * Return: 0 if not prime and 1 if prime..
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (help(n, 1));
}


/**
 * help - checks if a number is a prime number using recursion.
 * @n: The number to be checked.
 * @try: Comparison variable.
 *
 * Return: 0 if not prime and 1 if prime.
 */

int help(int n, int try)
{
	if (n % try == 0 && try > 1 && try <= (n / 2))
		return (0);
	else if (try > n / 2)
		return (1);
	try++;
	return (help(n, try));
}
