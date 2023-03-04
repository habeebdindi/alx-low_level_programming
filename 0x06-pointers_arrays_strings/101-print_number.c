#include "main.h"
#include <limits.h>

/**
 * print_number - Prints integer using _putchar.
 * @n: Integer to be printed.
 *
 * Return: void
 */



void pr_int(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }
    if (n / 10 != 0)
        pr_int(n / 10);
    putchar((n % 10) + 48);
}

void print_number(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	pr_uint((unsigned int) n);
}
