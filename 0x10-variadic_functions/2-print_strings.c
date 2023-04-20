#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int elem;
	char *str;

	va_list printem;

	va_start(printem, n);

	for (elem = 0; elem < n; elem++)
	{
		str = va_arg(printem, char *);

		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}
		if (elem != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(printem);
	printf("\n");
}

