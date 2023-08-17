#include "lists.h"

/**
 * print_dlistint - prints a linked list
 * @h: the starting node
 *
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *head = h->prev;
	int i = 0, j = 0;

	while (head)
	{
		printf("%d\n", head->n);
		i++;
		head = head->prev;
	}
	while (h)
	{
		printf("%d\n", h->n);
		j++, h = h->next;
	}
	return (i + j);
}
