#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array using malloc
 *
 * @nmemb: number of elements
 * @size: byte size of element
 * Return: If nmemb or size is 0, return NULL
 *	If malloc fails, return NULL
 *	pointer to the allocated memory on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *allocmem;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocmem = malloc(nmemb * size);

	if (allocmem == NULL)
		return (NULL);

	/*initialize memory to zero*/
	ptr = allocmem;

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (allocmem);
}


