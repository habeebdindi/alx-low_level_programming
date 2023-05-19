#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a particular index in a doubly
 * linked list.
 * @head: the head of the list.
 * @index: the index.
 * Return: returns 1 on successful deletion and -1 otherwise.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (!*head || index < count)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp)
	{
		if (count == index)
		{
			temp->prev->next = temp->next;
			if (temp->next)
				temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
