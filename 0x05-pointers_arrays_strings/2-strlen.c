#include <stdio.h>

/**
 * _strlen - return the length of a string
 * @s: first operand
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; ++s)
		++c;

	return (c);
}
