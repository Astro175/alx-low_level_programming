#include "main.h"

/**
  * set_bit - Sets the value of a given bit at an index
  * @index: index
  * @n: integer
  * Return: 1 if it works, -1 if it does not.
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
		return (-1);

	value = 1 << index;
	*n = (*n | value);

	return (1);
}
