#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: input string
 * @s2: input string
 * @n: number of bytes
 * Return: If function fails,return NULL
 *	pointer to the concatenated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length = n;
	unsigned int i = 0;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	{
		length++;
	}

	result = malloc(sizeof(char) * (length + 1));

	if (result == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
	{
		result[length++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		if (i < n)

		result[length++] = s2[i];
	}

	result[length] = '\0';

	return (result);
}



