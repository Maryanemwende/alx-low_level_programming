#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments passed to program
 * @argv: array of strings containing the actual arguments
 * Return: If no number is passed to the program, print 0
 *	print Error,return 1 If no has symbols that arent digits
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int add = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
