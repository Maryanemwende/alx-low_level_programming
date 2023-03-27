#include "main.h"

/**
 * rev_string - a function that reverses a string
 *
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char Rvrs = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		count--;
		Rvrs = s[i];
		s[i] = s[count];
		s[count] = Rvrs;
	}
}
