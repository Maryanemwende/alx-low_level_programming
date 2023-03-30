#include "main.h"

/**
 * reverse_array - reverses content of array of integers
 *
 * @a: pointer to array whose contents are to be reversed
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int z;

	while (x < y)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
		x++;
		y--;
	}
}
