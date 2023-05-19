#include "lists.h"

/**
 * sum_dlistint - gets the sum of all data in a linked list.
 * @head: the head of the list.
 * Return: the calculated sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (0);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
