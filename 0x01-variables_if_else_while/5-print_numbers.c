#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * * main - main block
 * * Description: prints all single digit numbers of base 10
 * * 
 * * Return:Always  0 (success)
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
