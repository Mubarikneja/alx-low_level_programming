#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
* main - Entry
*
* Return: Always 0
*/
int main(void)
{
int len;
int len2;
int alen;
int elen;
char c = 'z';
char *str = "sometimes    by";

len = _printf("Let's try to printf a sentence.\n");
len2 = printf("Let's try to printf a sentence.\n");
_printf("Len:[%d, %i]\n", len, len);
printf("Len:[%d, %i]\n", len2, len2);
_printf("Neg:[%d]\n", -762534);
printf("Neg:[%d]\n", -762534);
_printf("Char:[%c]\n", 'H');
printf("Char:[%c]\n", 'H');
_printf("Str:[%s]\n", "I am a string !");
printf("Str:[%s]\n", "I am a string !");
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
printf("=====================\n");
printf("CHAR\n");
printf("=====================\n");
printf("Expected   : %c\n", 'a');
_printf("Actual     : %c\n", 'a');
elen = printf("Expected   : %c\n", c);
alen = _printf("Actual     : %c\n", c);
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
printf("Expected   : %cc\n", 'a');
_printf("Actual     : %cc\n", 'a');
printf("Expected   : %c\n", 53);
_printf("Actual     : %c\n", 53);
printf("Expected   : %c.\n", '\0');
_printf("Actual     : %c.\n", '\0');
printf("Expected   : %%%c\n", 'y');
_printf("Actual     : %%%c\n", 'y');
printf("=====================\n");
printf("STRINGS\n");
printf("=====================\n");
alen = elen = 0;
printf("Expected   : %s\n", "mubarik");
_printf("Actual     : %s\n", "mubarik");
printf("Expected   : %s$\n", "");
_printf("Actual     : %s$\n", "");
elen = printf("Expected   : %s\n", str);
alen = _printf("Actual     : %s\n", str);
elen = printf("%s\n", "1");
alen = _printf("%s\n", "1");
printf("Expected   : %i\n", elen);
printf("Actual     : %i\n", alen);
printf("Expected   : %sschool\n", "mubarik");
_printf("Actual     : %sschool\n", "mubarik");
printf("Expected: %d\n", elen);
_printf("Actual  : %d\n", alen);
printf("Expected   :%%%d\n", len);
_printf("Actual : %%%d\n", len);
_printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);
_printf("Unknown:[%r]\n", "strings");
_printf("Unknown:[%r]\n");
_printf("word %b\n", 10);
len =_printf("word %R\n", str);
_printf("%d\n", len);
return (0);
}
