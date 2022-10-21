#include "main.h"

/**
 * more_numbers - Entry
 * Return: 0
 */

void more_numbers(void)
{
	int i, n;

	for (i = 0; i < 9; i++)
	{
		for (n = 0; i <= 14; n++)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
