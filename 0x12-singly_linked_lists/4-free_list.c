#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: the head of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	if (!head)
	{
		free(head);
		return;
	}
	while (head->next)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
