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
	dlistint_t *new, *temp, *temp2;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		*h = (*h)->prev = new;
		return (new);
	}
	while (temp && idx > 0)
	{
		if (count == idx)
		{
			temp->prev->next = new;
			new->next = temp;
			new->prev = temp->prev;
			temp->prev = new;
			return (new);
		}
		if (temp->next == NULL)
			temp2 = temp;
		temp = temp->next;
		count++;
	}
	if (idx == count)
	{
		new->next = NULL;
		new->prev = temp2;
		temp2->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
