#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in an array of integers
 * using the Binear search algorithm. This function assumes the array is
 * sorted in ascending order already and that the value won't appear more than
 * once.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elemnts in @array.
 * @value: value to be searched for.
 * Return: -1 on not finding @value, else @value's index.
 */
int binary_search(int *array, size_t size, int value)
{
	int l, r;

	l = 0;
	r = size - 1;
	return (recursive_bin_search(array, value, l, r, size));
}

/**
 * recursive_bin_search - A recursive helper function implementing BS.
 * @array: a pointer to the first element of the array to search in.
 * @value: value to be searched for.
 * @r: rmost index of where to end search.
 * @l: lmost index of where to begin search.
 * @size: number of elemnts in @array.
 * Return: -1 on not finding @value, else @value's index.
 */
int recursive_bin_search(int *array, int value, int l, int r, int size)
{
	int i, mid = l + (r - l) / 2;

	if (l > r)
		return (-1);
	printf("Searching in array: ");
	for (i = l; i < size; i++)
	{
		printf("%d", array[i]);
		if (i + 1 != (int)size)
			printf(", ");
	}
	printf("\n");
	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (recursive_bin_search(array, value, l, mid - 1, mid));
	else
		return (recursive_bin_search(array, value, mid + 1, r, r + 1));
}
