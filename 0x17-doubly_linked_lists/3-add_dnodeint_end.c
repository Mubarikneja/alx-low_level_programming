#include "listof.h"
#include <string.h>
#include <stdio.h>

/**
 * add_dnodeint_end - add a node at the end 
 * @head: The character to print
 * @n: string for the new node
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *now;
	dlistint_t *new;

	now = *head;
	while (now && now->next != NULL)
		now = now->next;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
    new->prev = now;

	if (now)
		now->next = new;
	else
		*head = new;

	return (new);
}
