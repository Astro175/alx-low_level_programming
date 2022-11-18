#include "variadic_functions.h"

/**
  * print_numbers - Entry
  * @separator: char
  * @n: int
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(my_list, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(my_list);
}


