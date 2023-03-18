#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: NULL on failure. On success, pointer to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents of
 * s2, and null terminated.
 */

char *str_concat(char *s1, char *s2)
{
	char *str, *tmp;
	int len = 0, l = 0;

	if (s1 == NULL)
		len++;
	else
		while (s1[len] != '\0')
			len++;
	if (s2 == NULL)
		l++;
	else
		while (s2[l] != '\0')
			l++;
	str = malloc(sizeof(char) * (len + l + 1));
	if (str == NULL)
		return (NULL);
	tmp = str;
	if (s1 == NULL)
	{
		*tmp = '\0';
		tmp++;
	}
	else
		while ((*tmp++ = *s1++))
			;
	if (s2 == NULL)
		*tmp = '\0';
	else
	{
		tmp--;
		while ((*tmp++ = *s2++))
			;
	}
	return (str);
}
