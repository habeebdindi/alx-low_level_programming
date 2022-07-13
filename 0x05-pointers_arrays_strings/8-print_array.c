#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		if (c == 0)
			printf("%d", a[c]);
		else
			printf(", %d", a[c]);
	}
		printf("\n");
}
