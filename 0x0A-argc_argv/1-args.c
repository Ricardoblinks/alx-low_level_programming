#include"main.h"

/**
 * main - print name of program
 * @argc: arguement counter
 * @argv: pointer to array of arguements
 * Return: 0 on success
 */

int main(int argc, char *argv)
{
	if (argc > 0)
	{
		int a;

		for (a = 0; a < argc; a++)
		{
			printf("%d\n", argc);
		}
	}
	return (0);
}
