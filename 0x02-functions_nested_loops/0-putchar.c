#include"main.h"

/**
 * main: entry point
 * 
 * return: always (0) success
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
