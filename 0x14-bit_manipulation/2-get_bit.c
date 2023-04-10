#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the integer to be examined.
 * @index: the index of the value to be returned.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int zero = 0;
	unsigned long int bits, dup = n;

	if (!dup)
		return (0);
	for (bits = 0; dup != 0; bits++)
		dup >>= 1;
	if (index >= bits || index < zero)
		return (-1);
	return (n & (1 << (index)) ? 1 : 0);
}
