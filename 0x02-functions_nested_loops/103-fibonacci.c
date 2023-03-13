#include "main.h"
#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms in a fibonacci
 * sequence, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int fib1, fib2, tmp, sum;

	sum = 0;
	fib1 = 1;
	fib2 = 2;
	for (; fib2 < 4000000; )
	{
		if (fib2 % 2 == 0)
			sum += fib2;
		tmp = fib1;
		fib1 = fib2;
		fib2 += tmp;
	}
	printf("%ld\n", sum);
	return (0);
}
