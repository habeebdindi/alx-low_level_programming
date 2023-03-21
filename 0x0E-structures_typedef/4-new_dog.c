#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * new_dog - creates a new dog.
 * @name: a pointer to the dog's name.
 * @age: the dog's age.
 * @owner: a pointer to the dog's owner.
 *
 * Return: a pointer to the struct of the newly created dog on success
 * and return NULL on failure.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;
	return (ptr);
}
