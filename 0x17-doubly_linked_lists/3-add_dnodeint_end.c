#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end of a list
 * @head: the head of the doubly likned list
 * @n: the data to add to the list
 * Return: the node at the end
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end = *head, *node = NULL;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->next = NULL;
	node->n = n;
	node->prev = NULL;
	if (!(*head))
	{
		(*head) = node;
		return (node);
	}
	while (end->next)
		end = end->next;
	node->prev = end;
	end->next = node;
	return (node);
}
