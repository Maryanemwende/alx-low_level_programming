#include <stdio.h>
#include "math.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 *
 * @n: first natural number to be printed
 * Return: 0 (Successful)
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
			n--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
