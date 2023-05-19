#include "lists.h"

/**
 * add_dnodeint - adds a node to the beginning of a doubly linked list.
 * @head: the head of the list.
 * @n: the data part of the node.
 * Return: returns the address of the newly added node or NULL if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->n = (int)n;
	new->next = *head;
	*head = new;
	return (new);
}
