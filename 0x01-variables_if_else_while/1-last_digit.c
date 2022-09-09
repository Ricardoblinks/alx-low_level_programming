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

	t = n % 10;
	printf("Last digit of %d is", n);
	if (t > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, t);
	}
	else if (t == 0)
	{
		printf("Last digit of %d is %d and is 0", n, t);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, t);
	printf("\n");
	return (0);
}
