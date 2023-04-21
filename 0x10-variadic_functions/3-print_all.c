#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 *
 * @format: list of types of args passed to function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char c;
	int i;
	float f;
	char *str;
	int a = 0;

	va_start(args, format);
	while (format && format[a])
	{
		switch (format[a++])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%i", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", str);
				if (str == NULL)
				{
					printf("(nil)");
				}
				break;
			default:
				continue;
		}
		if (format[a])
			printf(", ");
	}
	va_end(args);
	printf("\n");
}
