#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: head of the list.
 * @idx: the index of the list where the new node should be added. Index starts
 * at 0.
 * @n: number to fill the integer field with.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int len = listint_len(*head), i = 0;
	listint_t *temp = malloc(sizeof(listint_t)), *new_node;

	if (!temp || !head)
		return (NULL);
	temp = *head;
	if (idx < i || idx > len)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(temp);
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		new_node->n = n;
		*head = new_node;
		return (new_node);
	}
	if (idx == 1)
	{
		new_node->next = (*head)->next;
		new_node->n = n;
		(*head)->next = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 2; i++)
		temp = temp->next;
	new_node->next = temp->next;
	new_node->n = n;
	temp->next = new_node;
	return (new_node);
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
