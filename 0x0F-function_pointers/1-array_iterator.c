#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 *
 * @array: array input
 * @size: size of the array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t elem;

	for (elem = 0; elem < size; elem++)
	{
		if (action == NULL || array == NULL || size == 0)
		{
			exit(EXIT_FAILURE);
		}
		else
		{
			action(array[elem]);
		}
	}
}
