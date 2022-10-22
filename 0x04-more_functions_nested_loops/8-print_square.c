#include "main.h"

/**
 * print_square - Entry
 * @size: print
 * Return: 0
 */

void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('_');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
