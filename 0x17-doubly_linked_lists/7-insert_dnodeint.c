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
	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
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
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	free(new);
	return (NULL);
}
