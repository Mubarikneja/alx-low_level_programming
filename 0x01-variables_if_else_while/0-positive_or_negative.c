#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* Description: Get a random number and print the number */
/* main method to check the number is +,- or 0 */
int main(void) /* main function to compare the rundom number */
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* n val comparision  */
if (n > 0)
printf("%i is positive\n", n);
else if (n < 0)
printf("%i is negative\n", n);
else
printf("%i is zero\n", n);
return (0);
}
