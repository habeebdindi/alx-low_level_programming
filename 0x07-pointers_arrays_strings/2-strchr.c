#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 *
 * Return: a pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i, *p, *n;

	for (i = 0; i < '\0'; i++)
	{
		if (c == s[i])
		{
			p = s[i];
		}
		return (p);
	}
	n = NULL;
	return (n);
}
