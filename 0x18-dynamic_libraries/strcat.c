#include "main.h"

/**
 * _strcat - Concatenates the string pointed to by @src, including the
 * null byte, to the end of the string pointed to by @dest.
 * @dest: pointer to the string to be concatenated upon.
 * @src: source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*res != '\0')
	{
		res++;
	}
	while (*src != '\0')
	{
		*res++ = *src++;
	}
	*res = '\0';
	return (dest);
}
