#include "main.h"

/**
 * puts2 - prints every other char of a string, starting with first char
 * followed by a new line
 *
 * @str: string input
 */
void puts2(char *str)
{
	int x = 0;
	int length = 0;

	while (str[x++])
	{
		length++;
	}
	for (x = 0; x < length; x += 2)
	{
		_putchar(str[x]);
	}

	_putchar('\n');
}

