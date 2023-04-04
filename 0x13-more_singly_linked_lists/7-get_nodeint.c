#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: the head of the list.
 * @index: the index of the node, starting at 0.
 *
 * Return: if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, i = 0;

	if (!head)
		return (NULL);
	len = listint_len(head);
	if (index < i || index >= len)
		return (NULL);
	for (i = 0; i < len && i != index; i++)
		head = head->next;
	return (head);
}


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
