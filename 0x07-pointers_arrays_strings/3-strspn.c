#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string to be checked
 * @accept: prefix substring to be measured
 * Return: only bytes in s with bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int bytes = 0;
	int length = 0;
	unsigned int total = 0;

	for (bytes = 0; s[bytes] != '\0'; bytes++)
	{
		for (length = 0; accept[length] != '\0'; length++)
		{
			if (s[bytes] == accept[length])
			{
				total++;
				break;
			}
		}
		if (accept[length] == '\0')
		{
			return (total);
		}
	}
	return (total);
}
