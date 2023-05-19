#include "lists.h"
/**
 * dlistint_len - returns the length of a doubly linked list.
 * @h: head of the list.
 * Return: the lenght of the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *temp;

	if (!h)
		return (0);
	temp = (dlistint_t *)h;
	while (temp)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
