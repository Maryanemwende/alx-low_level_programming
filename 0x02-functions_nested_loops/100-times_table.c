#include "main.h"

/**
 * print_times_table - prints the n times table
 * starting with 0
 *
 * @n: value of timetable to be printed
 * Return: 0 (Successful)
 */
void print_times_table(int n)
{
	int x;
	int y;
	int times;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');

			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');

				times = x * y;

				if (times <= 99)
					_putchar(' ');
				if (times <= 9)
					_putchar(' ');

				if (times >= 100)
				{
					_putchar((times / 100) + '0');
					_putchar(((times / 10)) % 10 + '0');
				}
				else if (times <= 99 && times >= 10)
				{
					_putchar((times / 10) + '0');
				}
				_putchar((times % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
