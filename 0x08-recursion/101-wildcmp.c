#include "main.h"

/**
 * wildcmp - Function that compares a string
 * @s1: string 1
 * @s2: string 2
 * Return: returns 1 if identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) == 1 || (*s1 != '\0' && wildcmp(s1 + 1, s2) == 1))
			return (1);
		else
			return (0);

	}
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	else
		return (0);
}
