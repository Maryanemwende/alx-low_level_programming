#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals
 *	of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
