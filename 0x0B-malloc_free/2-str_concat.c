#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: input string
 * @s2:string to concatenate
 * Return: NULL on failure
 *	pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int indx;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (indx = 0; s1[indx] != '\0'; indx++)
	{
		len1++;
	}
	for (indx = 0; s2[indx] != '\0'; indx++)
	{
		len2++;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
	{
		return (NULL);
	}
	for (indx = 0; indx <= len1; indx++)
	{
		s3[indx] = s1[indx];
	}
	for (indx = 0; indx <= len2; indx++)
	{
		s3[len1 + indx] = s2[indx];
	}
	s3[len1 + len2] = '\0';
	return (s3);
}

