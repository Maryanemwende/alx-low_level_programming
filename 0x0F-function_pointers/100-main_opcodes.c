#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 * Return: 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int bytes;
	int elem;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *ptr = (unsigned char *) main;

	for (elem = 0; elem < bytes; elem++)
	{
		printf("%.2x", *(ptr + elem));

		printf(" ");
	}

	printf("\n");
	return (0);
}






