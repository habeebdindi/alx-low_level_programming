#include "main.h"
#include <stdio.h>
/**
 * swap_int - Swaps the values of two ints.
 * @a: 1st int.
 * @b: 2nd int.
 *
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
