#include "main.h"

/**
  * flip_bits - Number of bit required to flip from one bit to another
  * @m : number one
  * @n : number two
  * Return: number of byte
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		nbits++;
	}

	return (nbits);
}
