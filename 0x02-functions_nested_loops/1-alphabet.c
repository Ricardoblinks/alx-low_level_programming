#include"main.h"

/**
 * main - entry point
 *
 * description: prints alphabets from a through z
 * 
 * return: always 0 for success
 */

int print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

	return (0);
}
