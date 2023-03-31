#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: the name of the list.
 * @str: the string to put in string field of the node.
 *
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *end;

	if (!head || !str)
		return (NULL);
	end = malloc(sizeof(list_t));
	if (!end)
		return (NULL);
	end->str = strdup((char *)str);
	end->len = strlen((char *)str);
	end->next = NULL;
	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	if (!*head)
	{
		*head = end;
		return (*head);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = end;
	return (temp->next);
}
