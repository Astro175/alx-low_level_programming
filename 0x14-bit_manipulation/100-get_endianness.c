#include "main.h"

/**
  * get_endianness - Gets the endianness of a computer
  * Return: the endian number
  */

int get_endianness(void)
{
	unsigned int e;
	char *p;

	e = 1;

	p = (char *)&e;

	return ((int)*p);
}
