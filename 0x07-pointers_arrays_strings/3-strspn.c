#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring.
 * @s: string to search
 * @accept: charecters to be matched
 *
 * Return: return 1 when the match has been completed and returns 0 when there
 * is no match
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, l;
	char *p;

	l = 0;
	for (i = 0; i < '\0'; i++)
	{
		k = 0;
		for (j = 0; accept[j] = '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
				l++;
			}
		}
		if (k == 0)
			return (l)
	}
	return (0);
}
