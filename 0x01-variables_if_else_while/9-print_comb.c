#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int singleDigit;

	for (singleDigit = 0; singleDigit <= 9; singleDigit++)
	{
		putchar((singleDigit % 10) + '0');
		if (singleDigit == 9)
			continue;
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
