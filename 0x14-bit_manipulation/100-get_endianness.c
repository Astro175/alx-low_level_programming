#include "main.h"

/**
  * get_endianness - Gets the endianness of a computer
  * Return: the endian number
  */

int get_endianness(void)
{
	unsigned int e = 1;
	char *p;

	p = (char *) &e;

	return ((int)*p);
}
