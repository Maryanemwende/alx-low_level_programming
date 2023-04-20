#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int elem;

	va_list printem;

	va_start(printem, n);

	for (elem = 0; elem < n; elem++)
	{
		printf("%d", va_arg(printem, int));

		if (elem != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(printem);
	printf("\n");
}
