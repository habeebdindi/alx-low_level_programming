#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specifi
 * char.
 * @size: size of memory to be allocated.
 * @c: the char.
 *
 * Return: a pointer to the array or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	arr = malloc(size);
	if (arr == NULL)
		return (NULL);
	for (; i < size; i++)
		arr[i] = c;
	return (arr);
}
