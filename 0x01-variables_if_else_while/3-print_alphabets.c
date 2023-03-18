#include <stdio.h>

/**
 * main - Prints the alphabet from uppercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(a[x]);
	}
	putchar('\n');
	return (0);
}
