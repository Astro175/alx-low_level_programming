#include <unistd.h>
#include "main.h"

/**
  *_putchar - Entry
  *@c: Char
  *Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}