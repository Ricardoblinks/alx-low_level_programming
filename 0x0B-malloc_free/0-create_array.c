#include"main.h"

/**
  * create_array - create array of chars
  * @size: size of chars
  * @c: character operand
  *
  * Return: NULL if size is less equal to 0
  * otherwise - return a char
  */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	free(s);
	return (s);
}
