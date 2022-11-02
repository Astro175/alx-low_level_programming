#include <unistd.h>

/**
 * _putcharc - Entry
 * @c: char
 * Return: 1
 */
 
char _putchar(char c)
{
	return (write(1, &c, 1));
}

