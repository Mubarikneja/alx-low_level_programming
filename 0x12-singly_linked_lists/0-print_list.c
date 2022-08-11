#include <stdio.h>
#include "lists.h"

/**
* print_list - to print
* @k: pointer - the pointer in
*
* Return: the number of node
*/

size_t print_list(const list_t *k)
{
size_t i = 0;

while (k)
{
if (!k->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", k->len, k->str);
k = k->next;
i++;
}
return (i);
}
