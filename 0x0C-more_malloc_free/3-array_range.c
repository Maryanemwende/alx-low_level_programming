#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: smallest integer value of array
 * @max: largest integer value of array
 * Return: the pointer to the newly created array
 *	If min > max, return NULL
 *	If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int count;
	int *arr;
	int indx;

	if (min > max)
	{
		return (NULL);
	}

	count = max - min + 1;
	arr = malloc(sizeof(int) * count);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (indx = 0; indx < count; indx++)
	{
		arr[indx] = min++;
	}

	return (arr);
}


