#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s : string input
 * @c: character to be located
 * Return: pointer to first occurrence of c in the string s
 *	:NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
