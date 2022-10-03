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

	if (size == 0)
		return (NULL);

	s = malloc(sizeof(c) * size);
	return (s);
}
