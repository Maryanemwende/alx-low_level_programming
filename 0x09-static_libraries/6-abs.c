#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the value to be computed
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
		return (n);
	}
	else if (n > 0)
	{
		n = (1) * n;
		return (n);
	}
	else
	{
		n = 0;
		return (n);
	}
	_putchar('\n');
}
