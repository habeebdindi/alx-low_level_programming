#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 * using the Linear search algorithm.
 * @array: a pointer to the first element of the array to search in.
 * @size: number of elemnts in @array.
 * @value: value to be searched for.
 * Return: -1 on not finding @value, else @value's index.
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	return (-1);
}
