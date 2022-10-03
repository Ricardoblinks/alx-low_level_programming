#include"main.h"

/**
  * creat_array - create array of chars
  * @size: size of chars
  * @c: character operand
  *
  * Return: a char
  */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = malloc(sizeof(c) * size);

	return s;
}
