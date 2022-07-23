#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: the number whos factorial is to be determined
 *
 * Return: returns the factorial of the number on success
 * and returns -1 on error.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n -1));
}
