#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: number to be checked
 * Return: 1 (n > zero), 0 (n =zero), -1 (n < zero)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
