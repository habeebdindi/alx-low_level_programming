#include "main.h"
#include <stdio.h>

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


/**
 * puts_half - Prints half of a string.
 * @str: The string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (len - 1) / 2;
	int i, j;

	if (len % 2 == 0)
	{
		for (i = (len / 2); i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		for (j = (len - n); j < len; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
