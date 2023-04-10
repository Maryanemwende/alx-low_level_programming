#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers
 *
 * @argc: number of arguments passed to program
 * @argv: arrayr of strings containing the actual arguments
 * Return: 0, if the program receives two arguments
 *	print ERROR and return 1 otherwise
 */
int main(int argc, char *argv[])
{
	int Num;
	int Num2;
	int Multiple;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	Num = atoi(argv[1]);
	Num2 = atoi(argv[2]);
	Multiple = Num * Num2;

	printf("%d\n", Multiple);
	return (0);
}
