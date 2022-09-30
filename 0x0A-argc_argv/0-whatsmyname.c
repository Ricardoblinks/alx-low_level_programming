#include"main.h"

/**
 * main - entry point
 * @argc: Arguement count
 * @argv: Arguement vector
 * return: always 0 to show success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s", argc[0]);
	}
	_putchar('\n');
	return (0);
}
