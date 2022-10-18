#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
char num;

for (num = 1; num < 100; num++)
	{
putchar(num);
putchar(',');
putchar(' ');
if (num < 10)
{
	putchar('0' + num);
}
	}
	putchar('\n');
	return (0);
}
