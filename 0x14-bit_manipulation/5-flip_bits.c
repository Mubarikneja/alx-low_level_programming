#include "main.h"

/**
* flip_bits - number of bit
* @n: parameter
* @m: destiny
* Return: n
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int k, n = 0;
unsigned long int j = sizeof(unsigned long int) * 8;

for (k = 0; k < j; k++)
{
if ((m & 1) != (n & 1))
n += 1;
n = n >> 1;
m = m >> 1;
}
return (n);
}
