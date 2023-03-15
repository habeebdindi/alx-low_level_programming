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
	int **arr;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	arr = malloc(width * sizeof(*arr));
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(height * sizeof(int));
		if (arr[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
