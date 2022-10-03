#include"main.h"

/**
  * _strdup - function that returns a pointer
  * @str: pointer to allocated memory, filled with
  * strings
  * return: a char pointer
  */

char *_strdup(char *str)
{
	char *tmp;
	int i, j;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	tmp = (char *)malloc(sizeof(char) * (i + 1));
	if (tmp == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		tmp[i] = str[i];
	return (tmp);
}
