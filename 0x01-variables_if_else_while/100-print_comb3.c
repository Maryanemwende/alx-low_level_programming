#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int y;
	int z;

	for (y = 0; y < 9; y++)
	{
		for (z = y + 1; z < 10; z++)
		{
			putchar((y % 10) + '0');
			putchar((z % 10) + '0');

			if (y == 8 && z == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
