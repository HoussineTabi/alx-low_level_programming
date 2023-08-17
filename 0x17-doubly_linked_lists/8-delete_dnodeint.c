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
	dlistint_t *prev = NULL, node = *head;
	unsigned int count = 0;

	if (!head || !(*head))
		return (-1);
	if (index == 0)
	{
		prev = *head;
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		free(prev);
		return (1);
	}
	while (node && count < index)
	{
		count++;
		prev = node;
		node = node->next;
	}
	if (count != index)
		return (-1);
	prev->next = node->next;
	if (node && node->next)
		(node->next)->prev = prev;
	if (node)
		free(node);
	return (1);
}
