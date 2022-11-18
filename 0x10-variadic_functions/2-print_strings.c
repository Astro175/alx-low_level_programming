#include "variadic_functions.h"

/**
  * print_strings - Entry
  * @separator: char
  * @n: int
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int i;
	char *str;

	va_start(my_list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(my_list, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(my_list);
	printf("\n");
}
