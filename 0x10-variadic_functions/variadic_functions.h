#ifndef VA_LIST
#define VA_LIST
#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_num(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);


/**
 * struct printer - a new struct
 * @symbol: symbol
 * @f: function to print
 */

typedef struct printer
{
	char *symbol;
	void (*print)(va_list args);
} printer_t;
#endif
