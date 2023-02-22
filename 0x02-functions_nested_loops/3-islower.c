#include "main.h"

/**
 * _islower - Checks if a letter is in lowercase
 * @c: The letter to be checked
 *
 * Return: 1 if letter is in lowercase and 0 otherwise.
 */

int _islower(int c)
{
	int start = 97;
	int end = 122;

	while (start <= end)
	{
		if (start == c)
			return (1);
		start++;
	}
	return (0);
}
