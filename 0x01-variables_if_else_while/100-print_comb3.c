#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 1; num < 100; num++)
	{
		if (num < 10)
		{
			putchar('0' + num);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(num);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
