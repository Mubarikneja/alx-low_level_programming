#include "list.h"
#include <string.h>

/**
 * *add_dnodeint - adds a node 
 * @head: list head
 * @n: int element 
 * Return: number of elements
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->n = n;
	new->next = *head;
    new->prev = NULL;
	*head = new;

	return (new);
}
