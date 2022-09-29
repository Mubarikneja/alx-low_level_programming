#include "listof.h"
#include <stdio.h>

/**
 * print_dlistint - print element
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *now = h;

	while (now != NULL)
	{
		printf("%i\n", now->n);
		now = now->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
