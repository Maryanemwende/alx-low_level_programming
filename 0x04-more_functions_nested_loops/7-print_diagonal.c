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

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (s = 0; s < l; s++)
				_putchar(' ');
			_putchar('\\');

			if (l == n - 1)

			_putchar('\n');
		}
	}
	_putchar('\n');
}
