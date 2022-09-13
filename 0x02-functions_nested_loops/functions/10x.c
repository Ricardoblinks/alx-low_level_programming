#include"main.h"

void print_alphabet_10x(void)
{
	int a;
	for (a = 0; a < 10; a++)
	{
		int b;
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
