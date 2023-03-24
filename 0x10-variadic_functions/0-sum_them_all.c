#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all it's parameters.
 * @n: the first argument.
 *
 * Return: 0 if n is 0 and sum if it isnt.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list args;

	if (n <= 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return(sum);
}
