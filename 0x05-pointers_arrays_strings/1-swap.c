#include <stdio.h>

/**
 * swap_int - swaps two integers
 * @a: first operand
 * @b: second operand
 */

void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}
