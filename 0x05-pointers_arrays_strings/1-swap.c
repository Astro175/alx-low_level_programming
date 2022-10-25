#include "main.h"

/**
 * swap_int - Entry
 * @b: ch
 * @a: ch
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
