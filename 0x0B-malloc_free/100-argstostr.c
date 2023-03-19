#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arg count.
 * @av: array of ptrs to char.
 *
 * Return: pointer to a new string, or NULL if it fails,
 * NULL if ac == 0 or av == NULL
 */

char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *ptr, *tmp;

	if (ac == 0)
		return (NULL);
	if (av == NULL)
		return (NULL);
	for (i = 0; av[i] != NULL; i++)
		len += _strlen(av[i]) + 1;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	tmp = ptr;
	for (i = 0; av[i] != NULL; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, tmp++)
			*tmp = av[i][j];
		*tmp++ = '\n';
	}
	return (ptr);
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
