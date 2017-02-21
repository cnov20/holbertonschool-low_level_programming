#include "holberton.h"

/**
 * print_rev - prints string in reverse, followed by new line to std out
 * @s: string to be printed, with new line, to std out
 *
 * Return: (0)
 */

void print_rev(char *s)
{
	int i = 0;
	i = _strlen(s) - 1;

	while (i > -1)
        {
		_putchar(s[i]);
		i--;
	}

        _putchar('\n');
}
