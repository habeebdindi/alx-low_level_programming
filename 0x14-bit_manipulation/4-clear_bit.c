#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the integer to be examined.
 * @index: the index of the value to be returned.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bits = sizeof(unsigned int long) * 8 - 1;

	if (index > bits)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
