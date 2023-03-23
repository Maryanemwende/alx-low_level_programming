#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: character to be checked
 * Return:  if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c != 'A' && c != 'Z')
	{
		return (0);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
