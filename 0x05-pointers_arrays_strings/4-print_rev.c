#include"main.h"

/**
 * print_rev - print strings in reverse order
 * @s: string variable
 *
 */

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; ++c)
		;
	for (--c; c >= 0; --c)
		_putchar(s[c]);
	_putchar('\n');
}
