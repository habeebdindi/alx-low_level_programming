#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string.
 *
 * Return: 1 if it is a palindrome and 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *beg = s;

	while (*s)
		s++;
	return (helper(beg, --s));
}


/**
 * helper - helper funtion for is_palindrome.
 * @beg: pointer the string.
 * @end: pointer to the end of the string.
 *
 * Return: 1 if it is a palindrome and 0 otherwise.
 */

int helper(char *beg, char *end)
{
	if (*beg == *end)
	{
		if (beg + 1 == end || beg == end)
			return (1);
		return (helper(beg + 1, end - 1));
	}
	return (0);
}
