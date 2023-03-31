#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: the starting point.
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t ncount = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		ncount++;
		h = h->next;
	}
	return (ncount);
}
