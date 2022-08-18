#include "main.h"

/**
* get_endianness - check
* Return: 0 if big 
*/

int get_endianness(void)
{
unsigned int k = 1;
char *c = (char *) &k;
return (*c);
}
