#include "holberton.h"

/**
 * palindrome_help  - helper function that compares characters of string
 * @i: starting index of string to compare to length index
 * @len: string length, iterate through from end of string to be compared to i
 * @s: string to be printed
 *
 * Return: none
 */

int palindrome_help(int i, int len, char *s)
{

	if (i > len)
	{
		return (1);
	}
	else if (s[i] != s[len - 1])
	{
		return (0);
	}
	else
	{
		return (palindrome_help(i + 1, len - 1, s));
	}
}

/**
 * _strlen_recursion - function that recursively returns the length of a string
 * @s: string to be counted
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * is_palindrome - function that recursively determines if string is palindrome
 * @s: string to check
 *
 *
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (*s == ' ')
	{
		return (1);
	}
	else
	{
		return (palindrome_help(0, len, s));
	}
}
