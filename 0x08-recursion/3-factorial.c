#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 *
 * @n: number whose factorial is to be found
 * Return: If n < 0, return -1
 *	if n = 1 or 0, return 1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
