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
	unsigned int len, i = 0;
	listint_t *temp, *temp1;

	if (!head || !*head)
		return (-1);
	len = listint_len(*head);
	if (index < i || index > len)
		return (-1);

	temp = malloc(sizeof(listint_t));
	temp1 = malloc(sizeof(listint_t));
	if (!temp || !temp1)
	{
		free(temp);
		free(temp1);
		return (-1);
	}
	temp = *head;
	for (i = 0; i < index; i++)
	{
		if (i == index - 1)
			temp1 = temp;
		temp = temp->next;
	}
	temp1->next = temp;
	free(temp);
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
