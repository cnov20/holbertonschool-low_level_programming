#include "holberton.h"

/**
 * _puts - prints string followed by new line to std out
 * @str: string to be printed, with new line, to std out
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (i < *str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
