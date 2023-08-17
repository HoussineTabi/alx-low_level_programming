#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index given
 * @head: the head of the doubly linked list
 * @index: the index of the node to delete
 *
 * Return: 1 in success and -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *node = *head;
	dlistint_t *next = NULL;
	unsigned int count = 0;

	if (!head && !(*head))
		return (-1);
	if (index == 0)
	{
		prev = *head;
		(*head) = (*head)->next;
		free(prev);
		return (1);
	}
	while (node != NULL && count < index)
	{
		count++;
		prev = node;
		node = node->next;
		node = node->next;
	}
	if (count != index)
		return (-1);
	if (node != NULL)
	{
		prev->next = node->next;
		if (next)
			next->prev = prev;
		free(node);
		return (1);
	}
	return (-1);
}
