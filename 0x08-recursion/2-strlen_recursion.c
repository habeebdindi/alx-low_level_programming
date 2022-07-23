#include "main.h"
/**
 * _strlen_recursion - returns the length of a string.
 * @s: input string.
 *
 * Return: returns the variable, length.
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length++;
	return (length + _strlen_recursion(s + 1));
}
