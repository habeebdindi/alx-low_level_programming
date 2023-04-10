#include "main.h"

/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: a pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int pow = 0;

	if (b == NULL)
		return (0);
	pow = _strlen((char *)b) - 1;
	for (; (!*b || *b) && pow > -1; b++, pow--)
	{
		if (*b == '1')
			sum += _pow(2, pow);
		if (*b != '0' && *b != '1')
			return (0);
	}
	return (sum);
}

/**
 * _pow - returns the value of x raised to the power of y.
 * @x: base.
 * @y: power.
 * Return: result of the operation.
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * _strlen - Counts length of a string.
 * @s: The string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
