#include "main.h"

/**
 * _strncpy - Copies at most an inputted number
 * of bytes from string src into dest
 *
 * @dest: the string copy
 * @src: The source string
 * @n: number of bytes copied from src
 * Return: a pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int input = 0;

	while (src[input] != '\0' && input < n)
	{
		dest[input] = src[input];
		input++;
	}
	while (input < n)
	{
		dest[input] = '\0';
		input++;
	}
	return (dest);
}
