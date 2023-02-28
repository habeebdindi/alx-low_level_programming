#include "main.h"

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
 * puts2 - Prints every other character of a string.
 * @str: The string.
 *
 * Return: void.
 */

void puts2(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
