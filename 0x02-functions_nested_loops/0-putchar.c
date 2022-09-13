#include"main.h"

/**
 * main: entry point
 *
 * description: prints _putchar without using printf and put
 * return: always (0) success
 *
 */

int main(void)
{
	char array[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(array[c]);
	}
	_putchar('\n');

	return (0);
}
