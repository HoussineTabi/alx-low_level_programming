#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly likned list
 * @h: the starting node
 *
 * Return: the number of node in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *head = h->prev;
	size_t j = 0;

	while (h->prev)
		h = h->prev;
	while (h)
	{
		j++;
		h = h->next;
	}
	return (j);
}
