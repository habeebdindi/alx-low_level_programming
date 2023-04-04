#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: the head of the list.
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = (*head)->n;

	if (!head || !*head)
		return (0);
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
