#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int wc(char *str);

/**
 * strtow - string to words.
 * @str: the string.
 * Return: a pointer to an array of words that make up str, ending with a NULL.
 */
char **strtow(char *str)
{
	int i = 0, j = 0, x = 0, st = 0, w = 0, len = 0;
	char **ptr;
	int stlen = strlen(str) + 1;

	if (str == NULL || *str == '\0')
		return (NULL);
	w = wc(str);
	ptr = malloc(sizeof(char *) * (w + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < stlen; i++)
	{
		if (str[i] == ' ' || (i == stlen - 1 && str[i] != ' '))
		{
			if (i > 0 && str[i - 1] != ' ')
			{
				ptr[j] = malloc(sizeof(char) * (len + 1));
				if (ptr[j] == NULL)
					return (NULL);
				for (x = 0, st = i - len; x < len; x++, st++)
					ptr[j][x] = str[st];
				ptr[j][x] = '\0';
				j++;
			}
			len = 0;
			continue;
		}
		if (str[i] != ' ')
			len++;
	}
	ptr[j] = NULL;
	if (j == 0)
		return (NULL);
	return (ptr);
}

/**
 * wc - count words.
 * @str: target string.
 *
 * Return: no. 0f words.
 */
int wc(char *str)
{
	int stlen = strlen(str);
	int w = 0, i = 0;

	for (i = 0; i < stlen; i++)
		if (str[i] == ' ' || (str[i + 1] == '\0'))
		{
			if (i > 0 && str[i - 1] != ' ')
				w++;
			continue;
		}
	return (w);
}
