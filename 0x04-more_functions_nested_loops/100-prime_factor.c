#include <stdio.h>
#include <math.h>

/**
  * main - Calculats the prime factor of a number
  * Return: Always 0
  */

int main(void)
{
	long int num = 612852475143;
	long int largest_factor = 1;
	int i;

	for (i = 2; i < sqrt(num); i++)
	{
		while (num % i == 0)
		{
			largest_factor = i;
			num /= i;
		}
	}
	if (num > 1)
		largest_factor = num;
	printf("%ld\n", largest_factor);
	return (0);
}
