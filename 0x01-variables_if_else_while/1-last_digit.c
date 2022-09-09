#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main: Entry point
 *
 * Description: Print last digit of n
 * 
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	printf("Last digit of %d is", n );
	if (n > 5)
	{
		printf("Last digit of n is %d and is greater than 5", n);
	}
	else if (n == 0)
	{
		printf("Last digit of n is %d and is 0", n);
	}
	else
	{
		printf("Last digit of n is %d and is less than 6 and not 0", n);
	}
	printf("\n");
	return (0);
}
