#include "main.h"

/**
 * times_table -  prints the 9 times table, starting with 0
 *
 * Return: 9 times table
 */
void times_table(void)
{
	int i = 0;
	int j = 1;
	int times;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			times = i * j;

			if (times <= 9)

				_putchar(' ');
			else
				_putchar((times / 10) + '0');

			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
