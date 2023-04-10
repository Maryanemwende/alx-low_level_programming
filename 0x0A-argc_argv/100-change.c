#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min no of coins to make change
 *
 * @argc: number of arguments passed to program
 * @argv: arrayr of strings containing the actual arguments
 * Return: 1, If the number of arguments is not exactly one
 *	0, otherwise
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents %= 25;
	coins += cents / 10;
	cents %= 10;
	coins += cents / 5;
	cents %= 5;
	coins += cents / 2;
	cents %= 2;
	coins += cents;

	printf("%d\n", coins);
	return (0);
}
