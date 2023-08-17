#include "lists.h"

/**
 * add_dnodeint - adds a node at the begining of the list
 * @head: the head of the list
 * @n: the data to insert
 * Return: the adress of the node that we add
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (!head)
		return (NULL);
	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->prev = NULL;
	node->n = n;
	node->next = *head;
	(*head) = node;
	return (node);
}
