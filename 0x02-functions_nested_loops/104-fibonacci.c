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
int diglen(long unsigned int n);
int main(void)
{

	long unsigned int fib1 = 1, fib1_l = 0, fib1_h = 0;
	long unsigned int fib2 = 2, fib2_l = 0, fib2_h = 0;
	long unsigned int tmp = 0, tmp_h = 0, tmp_l = 0, hi_n = 0, lo_n = 0;
	int i;

	printf("%lu, %lu, ", fib1, fib2);
	for (i = 3; i < 99; i++)
	{
       		if (i <= 92)
       		{
       			tmp = fib1;
       			fib1 = fib2;
       			fib2 += tmp;
			/* if (i < 91) */
		       	printf("%lu", fib2);
			if (i == 91)
			{
				tmp_h = fib2 / div;
				tmp_l = fib2 % div;
				/* printf("\t91_h: %lu\t", tmp_h); */
				/* printf("\t91_l: %lu\t", tmp_l); */
			}
			if (i == 92)
			{
				fib1_h = fib2 / div;
				fib1_l = fib2 % div;
				/* printf("\t92_l: %lu\t", fib1_h); */
				/* printf("\t92_l: %lu\t", fib2_l); */
			}
		}
		if (i >= 93)
		{
			hi_n = tmp_h + fib1_h + (tmp_l + fib1_l) / div;
			lo_n = (tmp_l + fib1_l) % div;
			printf("%lu010%lu", hi_n, lo_n);
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
