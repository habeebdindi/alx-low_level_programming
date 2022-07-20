#include "main.h"
#include <stddef.h>
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
	int j, i;

	length = 0;

	for (i =0; s[i] != '\0'; i++)
	{
		for  (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (length);
			}
		}
		
	}
	return (0);
}
