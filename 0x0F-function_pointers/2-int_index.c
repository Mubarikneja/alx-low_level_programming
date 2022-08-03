#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: array of 
* @size: number of elements in the array
* @cmp: is a pointer to the function 
* Return: index first element 
* If no element matches, return -1
* If size <= 0, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
