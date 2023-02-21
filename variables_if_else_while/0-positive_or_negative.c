#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* 
 * main : assigns a random number 
 * to n each time it is executed
 *
 * return - (O) to success
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* prints whether the number in n is positive or negative*/
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
