#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a node at index given fi the
 * index is exist in the doubly linked list
 * @h: a pointer to the head of the doubly linked list
 * @idx: the index to insert into
 * @n: the data to insert in at the new node
 *
 * Return: the node at the index in success and NULL in failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head = *h, *node = NULL, *prev = NULL;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->next = NULL, node->prev = NULL;
	node->n = n;
	if (idx == 0)
	{
		node->next = *h;
		(*h)->prev = node;
		(*h) = node;
		return (node);
	}
	while (head && i < idx)
	{
		prev = head, head = head->next;
		i++;
	}
	if (i != idx)
		return (NULL);
	prev->next = node;
	node->prev = prev;
	if (!head)
		return (node);
	node->next = head;
	head->prev = node;
	return (node);
}
