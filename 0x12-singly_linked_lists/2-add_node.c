#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: the name of the list.
 * @str: the string to put in string field of the node.
 *
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->str = strdup((char *)str);
	temp->len = strlen((char *)str);
	temp->next = *head;
	*head = temp;
	return (*head);
}
