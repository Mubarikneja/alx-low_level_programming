#include "main.h"

/**
* binary_to_uint - convert
* @b: string containing
* Return: the converted
*/
unsigned int binary_to_uint(const char *b)
{
int j;
unsigned int va = 0;

if (!b)
return (0);

for (j = 0; b[j]; j++)
{
if (b[j] < '0' || b[j] > '1')
return (0);
va = 2 * va + (b[j] - '0');
}
return (va);
}
