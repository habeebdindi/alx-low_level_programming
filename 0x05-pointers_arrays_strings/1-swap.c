#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 *
 * Return: function's return type is void so returns nothing
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
