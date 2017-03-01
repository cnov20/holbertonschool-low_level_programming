#include "holberton.h"

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
		_putchar(*s);
	}
}
