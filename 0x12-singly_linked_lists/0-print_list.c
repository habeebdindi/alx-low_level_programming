#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: the starting point.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t ncount = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		ncount++;
		h = h->next;
	}
	return (ncount);
}
