#include <stdio.h>

/**
 * main - Prints all single digit numbers of base ten starting from zero
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar((digit % 10) + '0');
	}
	putchar('\n');
	return (0);
}
