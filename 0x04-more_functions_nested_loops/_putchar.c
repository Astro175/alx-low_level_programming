#include <unistd.h>
#include "main.h"

/**
 * _putcharr - Entry
 * @c: var
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
