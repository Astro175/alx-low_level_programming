#include  "main.h"

/**
  * malloc_checked - Entry
  * @b: ch
  * Return: 0
*/

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (p);
}

