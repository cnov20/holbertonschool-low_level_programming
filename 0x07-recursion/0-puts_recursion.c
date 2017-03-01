#include "holberton.h"

/**
 * _puts_recursion - function that recursively prints a string,
 * followed by a new line
 * @s: string to be printed
 *
 * Return: none
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
