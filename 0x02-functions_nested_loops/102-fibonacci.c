#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	long int i, fib1, fib2, tmp;

	fib1 = 1;
	fib2 = 2;
	printf("%ld, %ld, ", fib1, fib2);
	for (i = 0; i < 48; i++)
	{
		tmp = fib1;
		fib1 = fib2;
		fib2 += tmp;
		printf("%ld", fib2);
		if (i != 47)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
