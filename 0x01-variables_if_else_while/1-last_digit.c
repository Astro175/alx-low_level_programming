#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
int r;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
r = n % 10;
if (r > 5)
{
	printf("Last digit of %d is %d and is greater than 5", r n);
} else if (r < 6)
{
	printf("Last digit of %d is %d and is less than 6 and not 0", r n);
} else if (r == 0)
{
	printf("Last digit of %d is %d and is 0", r n)
}
return (0);
}
