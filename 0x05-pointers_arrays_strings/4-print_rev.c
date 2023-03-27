#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *
 * @s: string to be printed in reverse
 */
void print_rev(char *s)
{
	int All = 0;

	while (*s)
	{
		All++;
		s++;
	}
	while (All > 0)
	{
		s--;
		_putchar(*s);
		All--;
	}
	_putchar('\n');
}
