#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 *
 * @ptr: string to be changed
 * Return: A pointer to the changed string
 */
char *string_toupper(char *ptr)
{
	int i;

	i = 0;
	while (ptr[i] != '\0')
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
			ptr[i] = ptr[i] - 32;
		i++;
	}
	return (ptr);
}
