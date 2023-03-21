#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 *  in lowercase, followed by a new line
 *
 */
void print_alphabet_x10(void)
{
	int lines = 0;
	char alp = 'a';

	while (lines < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp ++)
		{
			_putchar(alp);
		}
		lines++;
		_putchar('\n');
	}
}
