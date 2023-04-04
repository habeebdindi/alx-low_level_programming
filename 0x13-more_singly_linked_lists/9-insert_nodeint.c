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
	unsigned int len, i = 0;
	listint_t *temp, *temp1, *new_node;

	if (!head || !*head)
		return (NULL);
	len = listint_len(*head);
	if (idx < i || idx > len)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	temp1 = malloc(sizeof(listint_t));
	new_node = malloc(sizeof(listint_t));
	if (!temp || !temp1 || !new_node)
	{
		free(temp);
		free(temp1);
		free(new_node);
		return (NULL);
	}
	temp = *head;
	for (i = 0; i < idx; i++)
	{
		if (i == idx - 1)
			temp1 = temp;
		temp = temp->next;
	}
	temp1->next = new_node;
	new_node->next = temp;
	new_node->n = n;
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
