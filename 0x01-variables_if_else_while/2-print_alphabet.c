#include <stdio.h>

/**
 * main - This program prints the alphabet in lowercase
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	char a[26] = "abcdefghijklmnopqrstuvwxyz";

	for (int x = 0; x < 26; x++)
	{
	putchar(a[x]);
	}
	putchar('\n');
	return (0);
}
