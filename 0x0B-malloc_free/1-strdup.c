#include "main.h"

/**
  * _strdup - ENtry
  * @str: string
  * Return: 0
  */

char *_strdup(char *str)
{
	char *a;

	int i, r = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	a = malloc(sizeof(char) * (i + 1));

	if (a == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		a[r] = str[r];

	return (a);
}




