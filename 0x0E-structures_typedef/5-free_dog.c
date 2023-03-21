#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this function frees memory allocated to variables of type 'dog_t'
 * @d: pointer to the struct to be freed.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
