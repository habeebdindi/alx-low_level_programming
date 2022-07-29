#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocate specific memory using malloc
 * @b: number of bytes to be allocated
 *
 * Return: 98 if maaloc fails, pointer to memory on success
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
	{
		exit(98);
	}
	else
	return (memory);
}
