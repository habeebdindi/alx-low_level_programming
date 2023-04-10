#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: the 'from' number.
 * @m: the 'to' number.
 *
 * Return: the number of bits needed to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int res;

	for (res = n ^ m; res; res >>= 1)
		if (res & 1)
			i++;
	return (i);
}
