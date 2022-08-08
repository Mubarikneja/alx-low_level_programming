#include "main.h"

/**
* printf_srev - function
* @args: type struct va_arg 
*
* Return: the string
*/
int printf_srev(va_list args)
{
char *s = va_arg(args, char*);
int i;
int j = 0;

if (s == NULL)
s = "(null)";
while (s[j] != '\0')
j++;
for (i = j - 1; i >= 0; i--)
_putchar(s[i]);
return (j);
}
