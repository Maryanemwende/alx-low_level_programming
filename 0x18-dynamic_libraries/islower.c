#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * @c: letter to be checked
 * Return: 1 (c is lowercase), return 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	else if (c != 'a' && c != 'z')
		return (0);

	else
		return (0);

	_putchar('\n');
}
