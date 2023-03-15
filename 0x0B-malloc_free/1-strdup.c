#include "main.h"
#include <stdlib.h>

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
		return NULL;
	while(str[len] != '\0')
		len++;
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	tmp = cpy;
	while(*str)
		*tmp++ = *str++;
	*tmp = '\0';
	return (cpy);
}
