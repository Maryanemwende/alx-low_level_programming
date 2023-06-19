#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: If str1 < str2, a negative integer value
 *         If str1 == str2, 0
 *         If str1 > str2, a positive integer value
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;

	while (s1[x] == s2[x])
	{
		if (s1[x] == '\0')
		{
			return (0);
		}
		x++;
	}
	return (s1[x] - s2[x]);
}
