#include "main.h"

/**
 * print_last_digit - Entry
 * Return: 0
 * @n : p
 */

int print_last_digit(int n)
{
	ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
