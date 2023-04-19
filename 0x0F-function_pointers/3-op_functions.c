#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: integer input
 * @b: integer input
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference between two ints
 *
 * @a: integer input
 * @b: integer input
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the multiplication of two ints
 *
 * @a: integer input
 * @b: int input
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - finds division of two integers
 *
 * @a: int input
 * @b: int input
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds remainder of the division of a by b
 *
 * @a: int input
 * @b: int input
 * Return: remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

