#include "main.h"
#include <string.h>


/**
 * is_palindrome- Checks if a string is palindrome or not
 * @s: string
 * Return: returns 1 if it is palindrome and 0, if it is not
 */

int is_palindrome(char *s)
{
	char *substr;
	int result;

	if (*s == '\0' || *(s + 1) == '\0')
		return (1);

	if (*s != *(s + strlen(s) - 1))
		return (0);

	substr = malloc(strlen(s) - 2 + 1);
	memcpy(substr, s + 1, strlen(s) - 2);
	substr[strlen(s) - 2] = '\0';

	result = is_palindrome(substr);
	free(substr);
	return (result);
}
