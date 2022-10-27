#include "main.h"

/**
 * string_toupper- Entry
 * Return: 0
 * @a: char
 */

char *string_toupper(char *a)
{
	int n = 0;

	while (a[n] != '\0')
	{
		if (a[n] >= 'a' && a[n] <= 'z')
		{
			a[n] -= 32;
		}
		n++;
	}
	return (a);
}
