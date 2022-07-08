#include "main.h"
#include <stdio.h>
/**
 *  _isupper - Check if paramter c represents an uppercase letter.
 *  @c: Int representing a character
 *
 * Return: 1 if c is uppercase
 * Return: 0 otherwise
*/

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
