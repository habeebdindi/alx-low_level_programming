#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given position.
 * @head: head of the list.
 * @index: the index of the list where the new node should be added.
 * Index starts at 0.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, len = listint_len(*head);
	listint_t *temp, *temp1;

	temp = *head;
	if (!temp || !head)
		return (-1);
	if (index < i || index > len)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	if (index == 1)
	{
		*head = temp->next->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 2; i++)
		temp = temp->next;
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
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
