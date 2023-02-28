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
 * print_rev - Prints string in reverse.
 * @s:
 *
 * Return: void.
 */

void print_rev(char *s)
{
	int len = 0;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
