#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: an int > 0 if s1 is smaller than s2, and int < 0 if bigger and
 * an int = 0 if srings are the same.
 */

int _strcmp(char *s1, char *s2)
{
	int ret = 0;

	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	ret = *s1 - *s2;
	return (ret);
}
