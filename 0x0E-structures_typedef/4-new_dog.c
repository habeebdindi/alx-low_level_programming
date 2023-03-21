#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

char *_strdup(char *str);

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
	char *ptrname;
	char *ptrowner;
	dog_t *ptr;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);

	ptrname = _strdup(name);
	ptrowner = _strdup(owner);
	if (ptrowner == NULL)
		return (NULL);
	if (ptrname == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = ptrname;
	ptr->age = age;
	ptr->owner = ptrowner;
	return (ptr);
}


/**
 * _strdup -  returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string given as parameter.
 *
 * Return: NULL if str = NULL. On success, the _strdup function returns a
 * pointer to the duplicated string. It returns NULL if insufficient memory was
 * available.
 */

char *_strdup(char *str)
{
	char *cpy, *tmp;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	tmp = cpy;
	while (*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (cpy);
}
