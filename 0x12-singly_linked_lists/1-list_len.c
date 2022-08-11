#include "lists.h"

/**
* list_len - Calculate the number
* @h: Pointer to a list.
*
* Return: Integer.
**/

size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int c = 0;

temp = h;
while (temp)
{
c++;
temp = temp->next;
}
return (c);
}
