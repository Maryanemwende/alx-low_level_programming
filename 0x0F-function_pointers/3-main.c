#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number of arguments passed to program
 * @argv: array of pointers to the arguments
 * Return: 0 (Success)
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int num1;
	int num2;
	char *op_func;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op_func = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op_func) == NULL || op_func[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (*op_func == '/' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (*op_func == '%' && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op_func)(num1, num2));

	return (0);
}
