#include "main.h"

/**
  * print_number - Prints an integer
  * @n: integer
  */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}

	_putchar((n % 10) + '0');
}
