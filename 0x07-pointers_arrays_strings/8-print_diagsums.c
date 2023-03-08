#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix.
 * @a: the matrix.
 * @size: its size.
 *
 * Return: flour.
 */

void print_diagsums(int *a, int size)
{
	int row, r_l, l_r;

	l_r = r_l = 0;

	for (row = 0; row < size; row++)
	{
		l_r += a[row * size + row];
		r_l += a[row * size + (size - 1 - row)];
	}
	printf("%d, %d\n", l_r, r_l);
}
