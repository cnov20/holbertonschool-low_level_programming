#include "holberton.h"

/**
 * print_line - function that prints underscore character to draw straight line
 * @n: character that represents the underscore character
 *
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}

		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
