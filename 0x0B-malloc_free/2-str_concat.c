#include"main.h"

/**
  */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		i++;
	s1[j] = s2[j];

	return (s1);
}
