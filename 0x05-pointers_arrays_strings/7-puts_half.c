#include "main.h"

/**
 * puts_half - Entry
 * @str: 0
 * Return: 0
 */

void puts_half(char *str)
{
	int len;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= (len / 2);
	while (*str != '\0')
	{
		_putchar(*str++);
		str++;
	}
}
