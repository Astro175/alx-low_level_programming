#include "main.h"

/**
  *_find_sqrt - Entry
  *@num: num
  *@root: root
  *Return: 0
  */

int _find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (_find_sqrt(num, root + 1));
}

/**
  * _sqrt_recursion - Entry
  * @n: number
  * Return: 0
  */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_find_sqrt(n, root));
}
