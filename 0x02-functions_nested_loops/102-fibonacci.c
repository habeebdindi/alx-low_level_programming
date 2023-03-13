#include "main.h"
#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, fib1, fib2, fib3;

	fib1 = 1;
	fib2 = 2;
	printf("%d, %d, ", fib1, fib2);
	for (i = 0; i < 50; i++)
	{
		fib3 = fib1 + fib2;
		i++;
		fib1 = fib2;
		fib2 = fib3;
		printf("%d", fib3);
		if (i != 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
