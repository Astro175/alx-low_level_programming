#include "main.h"


/**
  *check_prime - Entry
  *@n: number
  *@i: ite
  *Return: 0
*/

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}

/**
  *is_prime_number - Entry
  *@n: number
  *Return: 0
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
