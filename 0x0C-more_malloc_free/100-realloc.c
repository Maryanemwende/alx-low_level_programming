#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates mem block using malloc n free
 *
 * @ptr: memory prev allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size of new mem block
 * Return: If new_size == old_size, return ptr
 *	If new_size == 0 and ptr != NULL, return NULL
 *	pointer to the reallocated memory block, on success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *allocmem;
	unsigned int i;
	char *p;
	char *dest;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	allocmem = malloc(new_size);

	if (allocmem == NULL)
		return (NULL);

	p = ptr;

	allocmem = malloc(sizeof(*p) * new_size);

	if (allocmem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	dest = allocmem;

	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = *p++;
	free(ptr);
	return (allocmem);
}


