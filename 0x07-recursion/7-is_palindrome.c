#include "holberton.h"

/**
 * is_palindrome - function that determines if a string is a palindrome or not
 * @s - string to be analyzed
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == ' ')
	{
		return (1);
	}
	else
	{
		return

}

/**
 * _print_rev_recursion - function that recursively prints a string in reverse,
 * followed by a new line
 * @s: string to be printed
 *
 * Return: none
 */

void _print_rev_recursion(char *s)
{

	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
	}
}

/**
 * _strlen_recursion - function that recursively returns the length of a string
 *
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

int i, j, temp;

if (i < j)
{
	temp = string[i];
	string[i] = string[j];
	string[j] = temp;
	i++;
	j--;
}
