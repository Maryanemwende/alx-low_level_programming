#include "main.h"

/**
 * _strstr - Locates a substring
 *
 * @haystack: The string to be searched
 * @needle: The substring to be located
 * Return: pointer to the beginning of the located substring
 *	If the substring is not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int haybytes = 0;
	int needbytes = 0;
	int a, b, c;

	while (haystack[haybytes] != '\0')
	{
		haybytes++;
	}
	while (needle[needbytes] != '\0')
	{
		needbytes++;
	}
	if (needbytes == 0)
	{
		return (haystack);
	}

	for (a = 0; a < haybytes; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (b = 1, c = a + 1; b < needbytes && c < haybytes; b++, c++)
			{
				if (haystack[c] != needle[b])
				{
					break;
				}
				if (b == needbytes)
				{
					return (&haystack[a]);
				}
			}
		}
	}
	return ('\0');
}
