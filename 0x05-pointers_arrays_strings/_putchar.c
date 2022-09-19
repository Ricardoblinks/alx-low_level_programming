#include <unistd.h>

int _putchar(char s)
{
	int c;
	
	write(1, *s, 1);

	return(c);
}
