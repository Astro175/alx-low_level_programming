#include "main.h"

/**
 * rev_string - Entry
 * @s: ch
 * Return: 0
 */

void rev_string(char *s)
{
	char rv = 0;
	int c;
	int i;

	while (s[c] != 0)
	{
		c++;
	}
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}