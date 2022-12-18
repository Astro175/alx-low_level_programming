#include "main.h"
#include <string.h>


/**
 * is_palindrome- Checks if a string is palindrome or not
 * @s: string
 * Return: returns 1 if it is palindrome and 0, if it is not
 */

int is_palindrome(char *s)
{
	int len;
	int i;

	len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return (0);
		}
	}
	return (1);
}
