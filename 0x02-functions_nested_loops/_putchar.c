#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write thr character c to stdout
 * @c: thr=e char to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
