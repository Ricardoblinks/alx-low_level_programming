#include"main.h"

/**
  */

char *_strdup(char *str)
{
	char *tmp;
	int i;
	
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		tmp[i] = str[i];

	return (tmp);
}
