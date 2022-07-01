#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Return: Always 0 (Success) */
int main(void)
{
	 /* main - main block */
	 /* Description: Get a random number and print the number*/
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
