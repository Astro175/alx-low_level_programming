#include "main.h"

/**
 * _atoi - Entry
 * @s: print
 * Return: 0
 */

int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

while (!('0' <= *s && *s <= '9') && *s != '\0')
{
if (*s == '-')
{
sign *= -1;
}
if (*s == '+')
{
sign *= +1;
}
}
while ('0' <= *s && *s <= '9' && *s != '\0')
{
num = (num * 10) + (*s - '0');
s++;
}
return (num *sign);
}


