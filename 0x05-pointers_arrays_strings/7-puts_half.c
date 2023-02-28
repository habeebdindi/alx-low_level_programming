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
 * puts_half - Prints half of a string.
 * @str: The string.
 *
 * Return: void.
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int n = (_strlen(str) - 1) / 2;
	int i, j;

	if (len % 2 == 0)
	{
		i = len / 2;
		while (i <= len)
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for (j = n; j <= len; j++)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
