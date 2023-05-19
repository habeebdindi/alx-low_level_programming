#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list.
 * @h: the head of the list.
 * Return: returns the number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp;

	if (!h)
		return (0);
	temp = (dlistint_t *)h;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
