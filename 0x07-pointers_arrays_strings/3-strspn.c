#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to matching string.
 * @accept: pointer to string to match from.
 *
 * Return: number of bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
	int check;
	int n = 0;
	char *ptr;

	while (*s)
	{
		check = n;
		for (ptr = accept; *ptr; ptr++)
			if (*s == *ptr)
				n++;
		if (check == n)
			break;
		s++;
	}
	return (n);
}
