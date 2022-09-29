#include "listof.h"

/**
 * delete_dnodeint_at_index - delete node at specific index
 * @head: head of linked list
 * @index: index of node to delete
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *now;

	if (head == NULL)
		return (-1);

	now = *head;

	if (now == NULL)
		return (-1);

	while (index != 0)
	{
		now = now->next;
		index--;
		if (now == NULL)
			return (-1);
	}

	if (now->prev != NULL)
		now->prev->next = now->next;
	else
	{
		*head = now->next;
		if (now->next != NULL)
			now->next->prev = NULL;
		free(now);
	}

	return (1);
}


