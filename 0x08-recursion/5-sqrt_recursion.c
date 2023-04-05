#include "main.h"

/**
 * natural_sqrt - searches if number has a natural sqrt
 *
 * @res: the natural square root
 * @num: the number to be tested
 * Return: if the number has a natural sqrt, return num
 *	if number does not have natural sqrt, return -1
 */
int natural_sqrt(int res, int num)
{
	if ((num * num) == res)
	{
		return (num);
	}
	else if (num == (res / 2))
	{
		return (-1);
	}
	else
	{
		return (natural_sqrt(res, num + 1));
	}
}

/**
 * _sqrt_recursion - returns natural square root of a number
 *
 * @n: the number whose sqrt is to be returned
 * Return: natural square root of n
 *	if number does not have natural sqrt, return -1
 */
int _sqrt_recursion(int n)
{
	int num = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (natural_sqrt(n, num));
	}
}
