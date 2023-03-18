#include <stdio.h>

/**
 * main - Prints all letters except q and e
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
