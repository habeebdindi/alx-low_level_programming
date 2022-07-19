#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: subject string
 * @accept: characters to search for
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != 0)
	{
		while (*accept != 0)
		{
			if (*s == *accept)
			{
				p = *s;
			}
			else
			{
				return (NULL);
			}
			*accept++;
		}
		*a++;
	}
	return (p);
}
