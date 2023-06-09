#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: pointer to byte in s that matches one of the bytes in accept
 *	:NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s);
		}
		s++;
	}
	return ('\0');
}
