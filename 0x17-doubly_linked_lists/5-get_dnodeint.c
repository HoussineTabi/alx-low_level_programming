#include "lists.h"
/**
 * get_dnodeint_at_index - returns the node at an index given
 * @head: the head of the double linked list
 * @index: the index of the node to return
 * Return: the adress of the node in success and NULL in failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (!(head->prev))
		head = head->prev;
	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	if (i == index)
		return (head);
	return (NULL);
}
