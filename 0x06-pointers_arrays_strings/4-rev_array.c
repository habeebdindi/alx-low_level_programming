#include "main.h"

/**
 * reverse_array - Reverses the content of an array of ints.
 * @a: The array.
 * @n: No. of array elements.
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int arr1[1000];

	for (i = 0; i < n; i++)
		arr1[i] = a[i];
	i--;
	for (j = 0; j < n; j++, i--)
		a[j] = arr1[i];
}
