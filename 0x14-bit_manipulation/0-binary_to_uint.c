#include "main.h"

/**
  * binary_to_uint - Binary to decimals
  * @b: binary character to be converted
  * Return: Decimals
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int deci = 0;
	int len, base_two;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			deci += base_two;
		}
	}

	return (deci);
}
