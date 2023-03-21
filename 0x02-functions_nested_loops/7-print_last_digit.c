#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @g: digit to be printed
 * Return: value of the last digit
 */
int print_last_digit(int g)
{
	int last_digit;

	last_digit = (g % 10);

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
