#include "main.h"

/**
  * string_nconcat - Entry
  * @s1: ch1
  * @s2: ch2
  * @n: n
  * Return: 0
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int length1 = 0, length2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length1] != '\0')
		length1++;
	while (s2[length2] != '\0')
		length2++;

	if (n >= length2)
		n = length2;
	ptr = malloc((length1 + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	i = 0;

	while (i < length1)
	{
		ptr[i] = s1[i];
		i++;
	}

	while (i < (n + length1))
	{
		ptr[i] = s2[i - length1];
	}
	return (ptr);
}







