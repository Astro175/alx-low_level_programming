#include <stdio.h>

/**
 * main - A function that prints aplhabet a-z
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc = lc + 1)
	{
		putchar(lc);
	}
	putchar('\n');
	return (0);
}
