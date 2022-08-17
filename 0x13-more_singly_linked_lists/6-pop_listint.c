#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Delete 
* @head: Pointer to a list.
*
* Return: Integer if success.
*/

int pop_listint(listint_t **head)
{
listint_t *tpointer;
int mine;

if (*head == NULL)
return (0);
tpointer = *head;
*head = tpointer->next;
mine = tpointer->n;
free(tpointer);
return (mine);
}

