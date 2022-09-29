#include "listof.h"

/**
 * insert_dnodeint_at_index - insert node at specific index
 * @h: head of linked list
 * @idx: index of new node
 * @n: new node value
 * Return: inserted node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *now;
	dlistint_t *new;

	if (h == NULL)
		return (0);

	now = *h;

	while (idx != 0)
	{
		now = now->next;
		idx--;
		if (now == NULL)
			return (NULL);
	}

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = now;
	new->prev = now->prev;
	if (now->prev != NULL)
		now->prev->next = new;

	return (now);
}


