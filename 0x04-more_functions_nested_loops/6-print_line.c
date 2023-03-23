#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int dash = 0;

		while (dash < n)
		{
			_putchar('_');
			dash++;
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
