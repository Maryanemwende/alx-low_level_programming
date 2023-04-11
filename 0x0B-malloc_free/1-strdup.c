#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 *
 * @str: string input
 * Return: NULL if str = NULL
 *	pointer to the duplicated string, on success
 *	NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	int len;
	int indx;
	char *str2;

	if (str == NULL)/*check for null input str*/
	{
		return (NULL);
	}

	/*calculate length of input string*/
	for (len = 0; str[len] != '\0'; len++)

	/*allocate memory for the new string*/
	str2 = malloc(len + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	/*copy input string contents into str2*/
	for (indx = 0; indx <= len; indx++)
	{
		str2[indx] = str[indx];
	}

	return (str2);
}





