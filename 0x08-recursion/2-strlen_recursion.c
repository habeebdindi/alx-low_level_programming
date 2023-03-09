#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string.
 * Return: void.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (!*s)
		return (0);
	len++;
	return (len + _strlen_recursion(s + 1));
}
