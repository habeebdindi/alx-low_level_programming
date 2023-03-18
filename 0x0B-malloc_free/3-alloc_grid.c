#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: rows.
 * @height: columns.
 *
 * Return: NULL on failure. If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array = malloc(sizeof(int *) * height);
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
