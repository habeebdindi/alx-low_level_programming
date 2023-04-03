#include "lists.h"

/**
 * print_listint - prints all the elements of a list_t list.
 * @h: the head of the list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t ncount = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		ncount++;
		h = h->next;
	}
	return (ncount);
}
