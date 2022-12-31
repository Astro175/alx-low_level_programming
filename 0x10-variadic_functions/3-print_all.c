#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: a list of argument pointed to
 */

void print_char(va_list args)
{
	char letter;

	letter = va_arg(args, int);
	printf("%c", letter);
}

/**
 * print_string - Prints a string
 * @args: a list of argument pointed to
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * print_num - Prints a number
 * @args: a list of argument pointed to
 */

void print_num(va_list args)
{
	int num;

	num = va_arg(args, int);
	printf("%d", num);
}

/**
 * print_float - Prints a float
 * @args: a list of argument pointed to
 */

void print_float(va_list args)
{
	float num;

	num = va_arg(args, double);

	printf("%f", num);
}

/**
 * print_all - prints all arguments
 * @format: format of string
 * @...: variables to be printed
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int i = 0, j = 0;

	char *separator = "";
	printer_t func[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_num},
		{"f", print_float},
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(func[j].symbol)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			func[j].print(args);
			separator = ", ";
		}
		i++;
	}

	printf("\n");

	va_end(args);
}

