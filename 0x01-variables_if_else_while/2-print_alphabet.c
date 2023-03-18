#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(a[x]);
	}
	putchar('\n');
	return (0);
}
