#include "main.h"

/**
 * _strncat - concatenates two strings
 * uses at most n bytes from src
 *
 * @dest: The string to be appended upon
 * @src: The string to be appended to dest
 * @n: The no of bytes from src to be appended
 * Return: A pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int input;

	char *lstElmt = dest;

	while (*lstElmt != '\0')
	{
		lstElmt++;
	}
	input = 0;
	while (*src != '\0' && input < n)
	{
		*lstElmt = *src;
		lstElmt++;
		src++;
		input++;
	}
	*lstElmt = '\0';
	return (dest);
}
