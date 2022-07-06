#include "main.h"
/**
 * _islower - checks is a character is in lowercase
 * @c: the character
 *
 * Return: returns 1 if a character is in lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
