#include "lists.h"
/**
 * *add_dnodeint_end - adds a node to the end of a doubly linked list.
 * @head: the head of the list.
 * @n: the data part of the node.
 * Return: returns the address of the newly added node or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->n = (int)n;
	if (!*head)
	{
		new->prev = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	return (new);
}
