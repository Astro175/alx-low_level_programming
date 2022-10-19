#include "main.h"

/**
 * print_alphabet_x10 - prints X10
 */

void print_alphabet_x10(void)
{
	int ten;
	char lc;

	for (ten = '0'; lc <= '9'; lc++)
	{
		for (lc = 'a'; lc <= 'z'; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
