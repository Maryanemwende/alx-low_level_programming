#include "main.h"

/**
 * puts_half - print the second half of the string
 * if odd len, n = (length_of_the_string - 1) / 2
 *
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int a = 0;
	int length = 0;
	int b;

	while (str[a++])
	{
		length++;
	}
	if ((length % 2) == 0)
	{
		b = length / 2;
	}
	else
	{
		b = (length + 1) / 2;
	}
	for (a = b; a < length; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
