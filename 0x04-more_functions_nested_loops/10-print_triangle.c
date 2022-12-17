#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size of the triangle
 *
 */

void print_triangle(int size)
{
	int n, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (j = 1; j <= size - n; j++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

}
