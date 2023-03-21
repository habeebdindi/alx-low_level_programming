#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
	dog_t *ptr;

	if (name == NULL || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);

	ptr->name = malloc(_strlen(name) + 1);
	if (ptr->name == NULL)
	{
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->name, name);

	ptr->age = age;

	ptr->owner = malloc(_strlen(owner) + 1);
	if (ptr->owner == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	_strcpy(ptr->owner, owner);
	return (ptr);
}


/**
 * _strcpy - Copies string pointed to by source to dest.
 * @dest: Buffer to copy to.
 * @src: Buffer to copy from.
 *
 * Return: void.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = src[i];

	return (dest);
}


/**
 * _strlen - Counts length of a string.
 * @s: The string.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
