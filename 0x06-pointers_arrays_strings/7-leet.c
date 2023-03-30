#include "main.h"

/**
 * leet - Encodes a string to 1337
 *
 * @str: The string to be encoded
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int x = 0;
	int y;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[x] == leet[y] ||
			    str[x] - 32 == leet[y])
				str[x] = y + '0';
		}

		x++;
	}

	return (str);
}
