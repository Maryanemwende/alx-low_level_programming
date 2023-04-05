#include "main.h"

/**
 * _strlen - finds length of the string
 *
 * @s: string whose length is to be checked
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;
	int i = 0;

	if (s[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}
/**
 * _palindrome_checker - checks if string is a palindrome
 *
 * @s: string to be checked
 * @Begin: start of string
 * @End: end of string
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int _palindrome_checker(char *s, int Begin, int End)
{
	if (Begin >= End)
	{
		return (1);
	}
	if (s[Begin] == s[End])
	{
		return (_palindrome_checker(s, Begin + 1, End - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: string to be checked
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (_palindrome_checker(s, 0, length - 1));
}
