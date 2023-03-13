#include "main.h"
#include <stdio.h>
#include <stdint.h>

/**
 * main - finds and prints the the first 98 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int fib1, fib2, tmp, i;

	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld, ", fib1, fib2);
	for (i = 0; i < 98; i++)
	{
		tmp = fib1;
		fib1 = fib2;
		fib2 += tmp;
		if (fib2 < 0)
			printf("%ld", fib2 * -1);
		else
			printf("%ld", fib2);
		if (i != 97)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
