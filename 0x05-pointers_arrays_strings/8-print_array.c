#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints elements of array.
 * @n: Number of elements.
 * @a: The array.
 *
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}
