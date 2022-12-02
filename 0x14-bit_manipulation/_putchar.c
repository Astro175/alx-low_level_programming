#include <unistd.h>

/**
  * _putchar - Writes one character in the standard output
  * @c: character to be printed
  * Return: returns number of characters printed
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
