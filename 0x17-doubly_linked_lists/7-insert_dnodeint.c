#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a particular index in a doubly
 * linked list.
 * @h: the head of the list.
 * @idx: the index.
 * @n: data to be inserted.
 * Return: returns the node at the specified index or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new, *temp;

	if (idx < count)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	while (temp)
	{
		if (count == idx)
		{
			temp->prev->next = new;
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
		temp = temp->next;
		count++;
	}
	if (idx == count)
		return (add_dnodeint_end(h, n));
	free(new);
	return (NULL);
}
