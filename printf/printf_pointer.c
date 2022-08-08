#include "main.h"

/**
* printf_pointer - prints an hex.
* @val: arguments.
* Return: counter.
*/
int printf_pointer(va_list val)
{
void *p;
char *s = "(nil)";
long int f;
int d;
int i;

p = va_arg(val, void*);
if (p == NULL)
{
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
return (i);
}

f = (unsigned long int)p;
_putchar('0');
_putchar('x');
d = printf_hex_aux(f);
return (d + 2);
}
