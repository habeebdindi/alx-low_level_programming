#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type 'struct dog'
 * @d: a pointer to the struct.
 * @name: a pointer to the 'name' element of the struct.
 * @age: the age element of the struct.
 * @owner: a pointer to the 'owner' element of the struct.
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
