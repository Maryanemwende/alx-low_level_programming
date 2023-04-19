#include "function_pointers.h"
#include <stddef.h>

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
		action(array[elem]);
	}
}
