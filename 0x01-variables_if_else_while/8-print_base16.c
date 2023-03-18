#include <stdio.h>

/**
 * main - Prints all the numbers of base sixteen in lowercase
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;
	char alp;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alp = 'a'; alp <= 'f'; alp++)
	{
		putchar(alp);
	}
	putchar('\n');
	return (0);
}
