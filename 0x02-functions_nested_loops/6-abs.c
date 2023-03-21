#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 *
 * @r: the value to be computed
 * Return: the absolute value of int
 */
int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
		return (r);
	}
	else if (r > 0)
	{
		r = (1) * r;
		return (r);
	}
	else
	{
		r = 0;
		return (r);
	}
	_putchar('\n');
}
