#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 *
 * @s: pointer to the block of memory to fill
 * @b: value to be set
 * @n: number of bytes to be set to the value
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	/*for (i = 0; s[i] != '\0'; i++)*/
	/*{*/
		for (i = 0; i < n; i++)
			s[i] = b;
	/*}*/
	return (s);
}
