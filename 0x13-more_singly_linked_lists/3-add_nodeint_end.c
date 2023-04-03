#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of a list.
 * @head: the head of the list.
 * @n: integer field of the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = malloc(sizeof(listint_t));

	if (!new_node || !temp)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		free(temp);
		*head = new_node;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
