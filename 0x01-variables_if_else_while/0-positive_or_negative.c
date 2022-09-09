#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: print value of n indicating if it's negative positive or zero
 *
 * Return: Always 0 (Success)
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	  {
	    printf("%d is positive", n );
	  }
	else if (n == 0)
	  {
	    printf("%d is zero", n);
	  }
	else
	  {
	    printf("%d is negative", n);
	  }
	printf("\n");
	
	return (0);
}
