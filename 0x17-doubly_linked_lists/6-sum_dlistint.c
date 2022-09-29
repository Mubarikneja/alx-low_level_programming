#include "listof.h"

/**
 * sum_dlistint - find sum of elements
 * @head: head of linked list
 * Return: sum
 */

int sum_dlistint(list_at *head)
{
	list_at *current;
	list_at *next;
	int sum = 0;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		sum += current->n;
		current = next;
	}
	return (sum);
}
