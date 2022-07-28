#include "main.h"
#include <stdlib.h>

/**
* create_array - create a new array in memory for specific character
* @size: size of the array
* @c: array character
*
* Return: new array on success, null if allocation error
*/

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(char));
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
