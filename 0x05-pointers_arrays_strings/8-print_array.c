#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: The array of integers
 * @n: The number of elements to be printed
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);

		if (x == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
