#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 *
 */
void more_numbers(void)
{
	int b;

	int a = 0;

	while (a < 10)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
				_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
