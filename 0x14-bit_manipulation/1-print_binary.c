#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	int bit_shift = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while ((n >> bit_shift) > 0)
		bit_shift++;

	while (--bit_shift >= 0)
		_putchar((n >> bit_shift) & 1 ? '1' : '0');
}
