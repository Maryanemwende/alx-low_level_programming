#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int c;
	unsigned long add;

	unsigned long f1 = 0;
	unsigned long f2 = 1;

	for (c = 0; c < 50; c++)
	{
		add = f1 + f2;
		printf("%lu", add);

		f1 = f2;
		f2 = add;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
