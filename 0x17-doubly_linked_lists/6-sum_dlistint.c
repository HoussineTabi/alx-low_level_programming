#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the elements in a
 * doubly linked list
 *
 * @head: the head of the linked list
 *
 * Return: 0 if the list is empty or NULL and the sum of
 * elements otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int sum_dlist = 0;

	if (!head)
		return (0);
	while (head->prev)
		head = head->prev;
	while (head)
	{
		sum_dlist += head->n;
		head = head->next;
	}
	return (sum_dlist);
}
