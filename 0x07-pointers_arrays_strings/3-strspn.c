#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: String to be checked for matches.
 * @accept: String that contains match characters.
 *
 * Return:  number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	char length;
	char found;
	int j;

	length = 0;

	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		found = 0;
		for  (j = 0; j < '\0'; j++)
		{
			if (*s == accept[j])
			{
				found = 1;
				*s++;
			}
		}
		if (!found)
			return (NULL)
		length++;
	}
	return (length);
}
