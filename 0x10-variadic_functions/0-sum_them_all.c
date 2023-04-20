#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 *
 * @n: number of arguments to be expected
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int addition = 0;
	unsigned int elem;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);

	for (elem = 0; elem < n; elem++)
	{
		addition += va_arg(args, int);
	}

	va_end(args);
	return (addition);
}

