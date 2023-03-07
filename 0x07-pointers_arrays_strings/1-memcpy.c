#include "main.h"

/**
 * _memcpy - copies some bytes from a memory area to a memory area.
 * @src: pointer to memory area to copy from .
 * @dest: pointer to memory area to copy to.
 * @n: number of bytes to copy.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	char *ptx = src;

	while (n-- && *src)
		*ptr++ = *ptx++;
	return (dest);
}
