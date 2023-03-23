#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int l;
	int s;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1; l <= n; l++)
		{
			for (s = 1; s < l; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
