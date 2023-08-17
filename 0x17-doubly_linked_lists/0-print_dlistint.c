#include "lists.h"

/**
 * print_dlistint - prints a linked list
 * @h: the starting node
 *
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nb_of_node = 0;

	while (h->prev)
		h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		nb_of_node++, h = h->next;
	}
	return (nb_of_node);
}
