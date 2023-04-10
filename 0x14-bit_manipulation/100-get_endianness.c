#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian and 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int n = 0;
	char *checker = (char *)&n;

	if (*checker)
		return (0);
	return (1);
}
