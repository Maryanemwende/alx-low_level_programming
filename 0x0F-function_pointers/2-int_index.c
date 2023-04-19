#include "function_pointers.h"

/**
 * int_index - searches for an intege
 *
 * @array: integer array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches, return -1
 *	If size <= 0, return -1
 *	index of the first element for which the cmp function
 *	does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;

	if (size <= 0)
		return (-1);

	for (elem = 0; elem < size; elem++)
	{
		if (cmp(array[elem]) != 0)
			return (elem);
	}
	return (-1);
}
