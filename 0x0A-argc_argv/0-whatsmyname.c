#include"main.h"

/**
 * main - entry point
 * @argc: Arguement count
 * @argc: Arguement vector
 *
 * return: always 0 to show success
 */

int main(int argc, char *argv[])
{
	int a;
	if (argc < 0)
		return (1);

	for (a = 1; a < argc; a++)
	{
		_putchar(argv[a]);
	}
	_putchar('\n');
	return (0);
}
