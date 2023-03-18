#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: 0 (Successs)
 */
int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
