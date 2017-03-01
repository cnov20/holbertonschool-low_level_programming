#include "holberton.h"

/**
 * _strlen_recursion - function that recursively returns the length of a string
 *
 * @s: string to be counted
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0' || *s == ' ')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
