#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a particular index in a doubly
 * linked list.
 * @head: the head of the list.
 * @index: the index.
 * Return: returns the node at the specified index or NULL on failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (!head || index < count)
		return (NULL);
	temp = head;
	while (temp)
	{
		if (count == index)
			return (temp);
		temp = temp->next;
		count++;
	}
	return (NULL);
}
