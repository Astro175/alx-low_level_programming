#include <unistd.h>

/**
 * _putchar - print
 * @c: chr
 * Return: 0
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
