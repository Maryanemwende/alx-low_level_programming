#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: memory area where n bytes are copied to
 * @src: memory area where n bytes are copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int bytes = 0;

	/*for (bytes = 0; src[bytes] != '\0'; bytes++)*/
	/*{*/
		for (bytes = 0; bytes < n; bytes++)
			dest[bytes] = src[bytes];
	/*}*/
	return (dest);
}
