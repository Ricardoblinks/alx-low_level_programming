#include"main.h"

/**
  */

char *_strdup(char *str)
{
	char *tmp;
	int i, j;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		tmp[j] = str[j];
	}
	return (tmp);
}
