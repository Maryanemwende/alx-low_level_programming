#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: number of arguments passed to program
 * @argv: arrayr of strings containing the actual arguments
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
	{
		printf("%s\n", argv[num]);
	}
	return (0);
}
