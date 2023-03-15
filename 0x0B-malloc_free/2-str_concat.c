#include "main.h"
#include <stdlib.h>

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

        /* if (s1 == NULL) */
        /*         *s1 = ""; */
	/* else if (s2 == NULL) */
	/* 	*s2 = ""; */
        while(s1[len] != '\0')
                len++;
	while(s2[l] != '\0')
		l++;
	len += l;
        str = malloc(sizeof(char) * (len + 1));
        if (str == NULL)
                return (NULL);
        tmp = str;
        while(*s1)
                *tmp++ = *s1++;
	while(*s2)
		*tmp++ = *s2++;
        *tmp = '\0';
        return (str);
}
