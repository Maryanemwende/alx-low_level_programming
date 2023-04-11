#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes it with a specific char
 *
 * @size: size of one unit
 * @c: character element
 * Return: NULL if size = 0
 *	pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *Array;

	if (size == 0)/*return NULL if size of array is 0*/
	{
		return (NULL);
	}

	/*allocate new memory for the array of characters*/
	Array = malloc(sizeof(char) * size);

	if (Array == NULL)/*return null if memory allocation fails*/
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		Array[i] = c;
	}
	return (Array);
}

