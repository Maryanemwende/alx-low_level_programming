#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: number of arguments passed to program
 * @argv: array of strings containing the actual arguments
 * Return: 0 (Successful)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
