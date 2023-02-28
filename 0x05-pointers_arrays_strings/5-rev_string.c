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
 * rev_string - Reverses a string.
 * @s: String to be reversed.
 *
 * Return: void.
 */

void rev_string(char *s)
{
	int len, i, mid;
	char tmp;

	if (s == 0)
		return;

	len = _strlen(s);
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
