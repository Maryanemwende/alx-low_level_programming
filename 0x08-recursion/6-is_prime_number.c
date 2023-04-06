#include "main.h"

/**
 * prime_checker - Checks for prime numbers
 *
 * @n: input value
 * @Indx: input value
 * Return: 1 if integer is prime, 0 otherwise
 */
int prime_checker(int n, int Indx)
{
	if (Indx >= n && n >= 2)
	{
		return (1);
	}
	else if (n % Indx == 0)
	{
		return (0);
	}
	else if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, Indx + 1));
	}
}

/**
 * is_prime_number - checks for prime number
 *
 * @n: integer to be checked
 * Return: 1 if integer is prime, if not, 0
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 2));
}
