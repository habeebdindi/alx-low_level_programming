#include "main.h"
#include <stdio.h>
#include <limits.h>
#define div 10000000000

/**
 * main - finds and prints the the first 98 Fibonacci numbers, starting with 1
 * and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{

	unsigned int long fib1 = 1, fib1_l = 0, fib1_h = 0, fib2 = 2;
	unsigned int long tmp = 0, tmp_h = 0, tmp_l = 0, hi_n = 0, lo_n = 0;
	int i;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 3; i < 99; i++)
	{
		if (i <= 92)
		{
			tmp = fib1;
			fib1 = fib2;
			fib2 += tmp;
			printf("%lu", fib2);
			if (i == 91)
			{
				tmp_h = fib2 / div;
				tmp_l = fib2 % div;
			}
			if (i == 92)
			{
				fib1_h = fib2 / div;
				fib1_l = fib2 % div;
			}
		}
		if (i >= 93)
		{
			hi_n = tmp_h + fib1_h + (tmp_l + fib1_l) / div;
			lo_n = (tmp_l + fib1_l) % div;
			printf("%lu%lu", hi_n, lo_n);
			tmp_h = fib1_h;
			tmp_l = fib1_l;
			fib1_h = hi_n;
			fib1_l = lo_n;
		}
		if (i != 98)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
