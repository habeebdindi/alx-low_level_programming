#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @h: the starting point.
 *
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
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
