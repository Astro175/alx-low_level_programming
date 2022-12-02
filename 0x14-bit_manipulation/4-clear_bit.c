#include "main.h"

/**
  * clear_bit - Sets the bit at a given index to 0
  * @n: given bit
  * @index: index
  * Return: 1 if it worked, -1 if it does not work
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
