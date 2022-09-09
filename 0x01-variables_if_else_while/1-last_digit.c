#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main: Entry point
 *
 * Return: always 0 (success)
 *
 */

int main(void)
{
	int n;
	int t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	t = n % 10;
	printf("Last digit of %d is", n);
	if (t > 5)
	{
		printf(" %d and is greater than 5", t);
	}
	else if (t == 0)
	{
		printf(" %d and is 0", t);
	}
	else
	{
		printf(" %d and is less than 6 and not 0", t);
	}
	printf("\n");
	return (0);
}
