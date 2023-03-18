#include <stdio.h>

/**
 * main - Prints all single digit numbers of base ten
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}
	printf("\n");
	return (0);
}
