#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - prints char
 * @count: va_list variable
 */
void print_char(va_list count)
{
	printf("%c", va_arg(count, int));
}

/**
 * print_int - prints integer
 * @count: va_list variable
 */
void print_int(va_list count)
{
	printf("%i", va_arg(count, int));
}

/**
 * print_float - prints decimal point numbers
 * @count: va_list variable
 */
void print_float(va_list count)
{
	printf("%f", va_arg(count, double));
}

/**
 * print_str - prints character string
 * @count: va_list variable
 */
void print_str(va_list count)
{
	printf("%s", va_arg(count, char *));
}

/**
 * print_all - prints anything
 *
 * @format: list of types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	va_list count;

	int p;
	void *ptr_print;

	ptr_print[p] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float};
		{"s", print_str};
		{NULL},
		
	};



