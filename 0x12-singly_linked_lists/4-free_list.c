#include <stdlib.h>
#include "lists.h"

/**
* free_list - free 
* @head: list_t list 
*/

void free_list(list_t *head)
{
list_t *tmp;

while (head)
{
tmp = head->next;
free(head->str);
free(head);
head = tmp;
}
}
