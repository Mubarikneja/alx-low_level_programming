#include "main.h"

/**
* print_binary - prints the binary
* @n: parameter
*/
void print_binary(unsigned long int n)
{
int i, c = 0;
unsigned long int current;

for (i = 63; i >= 0; i--)
{
current = n >> i;

if (current & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
}
if (!c)
_putchar('0');
}
