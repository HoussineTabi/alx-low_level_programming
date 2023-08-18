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

	if (!head || (*head) == NULL)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			prev = *head;
			(*head) = (*head)->next;
			(*head)->prev = NULL;
			free(prev);
			return (1);
		}
		free(*head);
		(*head) = NULL;
		head = NULL;
		return (1);
	}
	while (node && count < index)
	{
		count++;
		prev = node;
		node = node->next;
		if (node)
			next = node->next;
	}
	if (count != index || !node)
		return (-1);
	if (node != NULL)
	{
		prev->next = next;
		if (next)
			next->prev = prev;
		free(node);
		return (1);
	}
	return (-1);
}
