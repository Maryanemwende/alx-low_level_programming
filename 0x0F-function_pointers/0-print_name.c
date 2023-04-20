#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to be printed
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		exit(EXIT_FAILURE);
	}
	else
	{
		f(name);
	}
}
