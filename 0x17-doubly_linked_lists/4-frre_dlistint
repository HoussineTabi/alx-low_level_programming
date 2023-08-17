#include "lists.h"
/**
 * free_dlistint - free a doubly linked list
 * @head: the head of the list
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
}
