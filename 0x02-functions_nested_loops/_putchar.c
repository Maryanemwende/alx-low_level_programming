#include "main.h"
#include <unistd.h>

/**
 * _putchar - Contains prototype for file one
 *
 * Return: 1 (Success)
 */
int _putchar(char char1)
{
	return (write(1, &char1, 1));
}
