#include <stdio.h>

/**
 * main - prints the largest prime factor of 612852475143
 *
 * Return: 0 (Success)
 */
int main(void)
{
	long n = 612852475143L;
	long i;

	for (i = 2L; i < n; i++)
	{
		while (n % i == 0)
		{
			n /= i;

		}
	}
	printf("%ld\n", n);
	return (0);
}
